/*
 * board.c
 *
 * chessboard rleated functions
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 17.07.2022   tstih
 *
 */
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#include <ugpx.h>

#include <engine/engine.h>
#include <game/board.h>
#include <game/draw.h>
#include <game/util.h>

/* previous board */
static uint8_t _brd_prev[67];
static uint8_t _brd_dirty[67];
static bool _init_board;

static int *_brd_get_trap(int row, int col) {
    return (int *)&bsq + 6 * (8 * row + col);
}

static char *_pieces="kqbrnp";
static void *_glyphs[]={
    &king,&kingm,
    &queen,&queenm,
    &bishop,&bishopm,
    &rook,&rookm,
    &knight,&knightm,
    &pawn,&pawnm
};
static void _brd_draw_piece(int row, int col) {
    if (!board[SQ(col, RANK_8-row)]) return;
    char piecechar=PIECE2CHAR(board[SQ(col, RANK_8-row)]);
    if (!piecechar) return; /* nothing to draw */
    /* is the piece white? */
    bool iswhite=isupper(piecechar);
    /* is square white? */
    bool whitesq=row%2==col%2;
    /* map piece to glyph*/    
    int gpos=2 * strch(_pieces, tolower(piecechar));
    void *piece=_glyphs[gpos], *mask=_glyphs[gpos+1];
    dim_t dim;
    int* s=_brd_get_trap(row,col);
    int midx = (OFFX(s[2]) + OFFX(s[3])) / 2;
    int midy = (OFFY(s[4]) + OFFY(s[5])) / 2 + (OFFY(s[5]) - OFFY(s[4])) / 4;
    /* measure glyph and adjust position */
    gmegpy(piece,&dim);
    int xpos=2 * midx - dim.w / 2 + 1;
    int ypossprite = midy - dim.h + 1;
    int yposmask = midy-33;
    /* draw piece */
    gputsprite(xpos+1, ypossprite, piece, iswhite?CO_FORE:CO_BACK);
    /* draw mask */
    if (iswhite)
        gsetcolor(CO_BACK); /* white on white => black */
    else  
        gsetcolor(CO_FORE); /* black on black => white */
    gputglyph(mask,xpos,yposmask);
    /* restore color */
    gsetcolor(CO_FORE);
}

static void _brd_draw_square(int row, int col) {
    /* is square white? */
    bool whitesq=row%2==col%2;
    /* get square trapezoid */
    int* s=_brd_get_trap(row,col);
    filltrap(
        OFFX(s[0]),
        OFFX(s[1]),
        OFFX(s[2]),
        OFFX(s[3]),
        OFFY(s[4]),
        OFFY(s[5]),
        whitesq ? CO_FORE : CO_BACK);
}

static void _brd_draw_top(int col) {
    /* outline */
    int* o=&bout;
    /* get square trapezoid */
    int* s=_brd_get_trap(RANK_1,col);
    /* remove top and redraw */
    gsetcolor(CO_BACK);
    fillrect(
        OFFX(s[0]),
        OFFY(o[4])-5,
        OFFX(s[1]),
        OFFY(s[4]));
    gsetcolor(CO_FORE);
    /* and outer line */
    drawline(OFFX(s[0]),OFFY(o[4]),OFFX(s[1]),OFFY(o[4]));
}

static void _brd_colum_dirty(int row, int col) {   
    /* previous rows */
    int prow=row-1;
    while (prow>=0 && board[SQ(col,RANK_8-prow)]) {
        _brd_dirty[SQ(col,RANK_8-prow)]=1;
        prow--;
    }
    if (prow>=0)
        _brd_dirty[SQ(col,RANK_8-prow)]=1;
    
    /* forward rows*/
    int frow=row;
    do {
        _brd_dirty[SQ(col,RANK_8-frow)]=1;
        frow++;
    } while (frow<=RANK_8);

}

static void _brd_calc_dirty() {
    /* find difference */
    for(int y=RANK_1;y<=RANK_8;y++)
        for (int x=FILE_A;x<=FILE_H;x++) {
            int pos=SQ(x, RANK_8-y);
            if (_brd_prev[pos]!=board[pos]) {
                _brd_colum_dirty(y,x);
            }
        }
    /* clean previous */
    memcpy(_brd_prev,board,67);
}

void print_board() {
    /* get board coords */
    int* o=&bout;
    int* s=&bsq;
    
    /* get dirty fields */
    if (!_init_board) _brd_calc_dirty(); 
    else {
        /* first draw board outline */
        drawtrap(
            OFFX(o[0]),
            OFFX(o[1]),
            OFFX(o[2]),
            OFFX(o[3]),
            OFFY(o[4]),
            OFFY(o[5]));
        _init_board=false;
    }
    
    for(int y=RANK_1;y<=RANK_8;y++)
        for (int x=FILE_A;x<=FILE_H;x++) {
            if (_brd_dirty[SQ(x, RANK_8-y)]) {
                if (y==RANK_1)
                    _brd_draw_top(x);
                _brd_draw_square(y,x);
                _brd_draw_piece(y,x);
                /* field is now clean */
                int pos=SQ(x, RANK_8-y);
            }
        }
    /* save to previous board */
    memcpy(_brd_prev,board,67);
    /* and clean the dirty */
    memset(_brd_dirty,0,67);
}

void init_board() {
    _init_board=true;
    for(int i=0;i<67;i++) {
        _brd_dirty[i]=1; /* every field is dirty */
        _brd_prev[i]=board[i]; /* copy board for comparison */
    }
}