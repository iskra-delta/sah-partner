/*
 * console.h
 *
 * console functions (data entry and print)
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 19.06.2023   tstih
 *
 */
#include <game/console.h>

static char _con_text[CON_ROWS][CON_COLS];
static uint8_t _con_ptr;

void con_init() {
    for(uint8_t i=0;i<CON_ROWS;i++)
        _con_text[i][0]=0; /* terminate all string */
    _con_ptr=0; /* initial row is 0 */
}

static void _con_hist_draw() {

}

void con_hist_add(char *move) {
    /* add move to console */
    /* redraw history */
    _con_hist_draw();
}

extern void con_error(char *msg) {
    /* clear prev. error */
    rect_t err_rect = RECT_ERROR;
    gsetcolor(CO_BACK);
    gfillrect(&err_rect);
    gsetcolor(CO_FORE);
    /* do we have a new message? */
    if (msg!=NULL)
        gputtext(&font12x8_font, msg, err_rect.x0, err_rect.y0);
}

static void _con_draw(char *move) {
    rect_t r=RECT_ENTRY;
    uint8_t movepos=0,disppos=5;
    char disp_move[14]="UKAZ>";
    if (move==NULL || !move[0]) {
        /* first erase */
        gsetcolor(CO_BACK);
        gfillrect(&r);
        gsetcolor(CO_FORE);
        /* now draw */
        disp_move[disppos++]='_';disp_move[disppos]=0;
        gputtext(&font12x8_font, disp_move, r.x0,r.y0);
    } else {
        /* format display pos */
        while (move[movepos]) {
            disp_move[disppos++]=toupper(move[movepos++]);
            if (disppos==7) disp_move[disppos++]='-';
        }
        disp_move[disppos++]='_';
        disp_move[disppos]=0;
        /* first erase */
        gsetcolor(CO_BACK);
        gfillrect(&r);
        gsetcolor(CO_FORE);
        /* now draw */
        gputtext(&font12x8_font, disp_move, r.x0,r.y0);
    }
}

void con_game_over(char *text) {
    dim_t dim;
    rect_t r=RECT_END;
    gsetcolor(CO_BACK);
    gfillrect(&r);
    gsetcolor(CO_FORE);
    r.x0+=2; r.x1-=2; r.y0++; r.y1--; /* implode */
    gdrawrect(&r);
    r.x0++; r.x1--;
    gdrawrect(&r);
    gmetext(&font12x8_font,text,&dim);
    int cx=(r.x1+r.x0)/2-dim.w/2,
        cy=(r.y1+r.y0)/2-dim.h/2;
    gputtext(&font12x8_font,text,cx,cy);
    while(!kbhit());
}

/*
 * fsm states
 * 0 - start entering the move
 * 1 - first char entered
 * 2 - first digit entered
 * 3 - second char entered
 * 4 - second digit entered
 */
bool con_input(char *move) {

    uint8_t movepos=0,disppos=0; /* points to string terminator */
    move[0]=0;
    char disp_move[5];
    bool move_done=false;
    int state=0;
    bool redraw=false;
    
    /* erase and signal successful entry */
    _con_draw(NULL);

    while(!move_done) {
        /* get key */
        char c=kbhit();
        if (c==K_CTRLC)
            return false;
        else if (c=='\r') { /* process enter */
            if (state==4) /* all data entered */
                move_done=true;
        } else if (c>='1'&&c<='8') { /* process number */
            if (state==1||state==3) {
                move[movepos++]=c;move[movepos]=0;
                state++;
                redraw=true;
            }
        } else if (c=='\b') { /* backspace */
            if (state) { /* not first letter */
                state--;
                move[--movepos]=0;
                redraw=true;
            }
        } else if (toupper(c)>='A'&&toupper(c)<='H') { /* letter */
            if (state==0||state==2) {
                move[movepos++]=c;move[movepos]=0;
                state++;
                redraw=true;
            }
        }

        /* refresh on screen */
        if (redraw) {
            _con_draw(move);
            redraw=false;
        }   
    }
    return true;
}