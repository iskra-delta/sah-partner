/*
 * chessboard.c
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

#include <ugpx.h>

#include <engine/engine.h>
#include <game/board.h>
#include <game/draw.h>

void board2d_draw(coord x, coord y) {
    drawrect(x,y,x+240,y+240);
    for(int i=0;i<8;i++) 
        for(int j=0;j<8;j++) {
            bool black=j%2;
            if (i%2) black=!black;
            if (!black) fillrect(x+30*j,y+30*i,x+30*j+30,y+30*i+30);
        }
}

void piece_draw(int x, int y, char piece) {
    void *glyph=NULL;
    dim_t dim;
    int* s=&bsq;
    s = s + 6 * (8 * y + x);
    int midx = (s[2] + s[3]) / 2;
    int midy = (s[4] + s[5]) / 2 + (s[5] - s[4]) / 4;
    switch(piece) {
        case 'k':
        case 'K':
            glyph=&kingm;
            break;
        case 'q':
        case 'Q':
            glyph=&queenm;
            break;
        case 'n':
        case 'N':
            glyph=&knightm;
            break;
        case 'b':
        case 'B':
            glyph=&bishopm;
            break;
        case 'r':
        case 'R':
            glyph=&rookm;
            break;
        case 'p':
        case 'P':
            glyph=&pawnm;
            break;
    }
    /* measure glyph and adjust position */
    gmegpy(glyph,&dim);
    /* and put it on screen */
    if (x%2==y%2)
        gsetcolor(CO_BACK);
    else 
        gsetcolor(CO_FORE);
    gputglyph(glyph, 2 * midx - dim.w / 2, midy - dim.h);
    /* restore color */
    gsetcolor(CO_FORE);
}

void board3d_draw() {

    gcls();

    int* o=&bout;
    int* s=&bsq;
    /* first draw empty board */
    drawtrap(o[0],o[1],o[2],o[3],o[4],o[5]);
    for(int y=0;y<8;y++)
        for (int x=0;x<8;x++) {
            if (x%2==y%2)
                filltrap(s[0],s[1],s[2],s[3],s[4],s[5]);
            else
                drawtrap(s[0],s[1],s[2],s[3],s[4],s[5]);
            s+=6;
            piece_draw(x,y,'k');
        }
    /* now draw chess pieces on it */


}