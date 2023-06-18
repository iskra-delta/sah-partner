/*
 * util.c
 *
 * utility funtions
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 17.07.2022   tstih
 *
 */
#include <game/util.h>

void pause(unsigned int loops) {
    for(int i=0;i<loops;i++) {};
}

int strch(char *s, char c) {
    int i;
    for(i=0;(*s)&&(*s!=c);i++,s++);
    if (*s) return i; else return -1;
}

void gputsprite(int x, int y, uint8_t *sprite, color c) {
    /* get sprite coordinates */
    uint8_t w=sprite[1], h=sprite[2];
    int datandx=4;  /* data starts at 4 */
    uint8_t row=0;
    int pcount;
    while (row<h) {
        gxy(x,y+row);   /* goto x,y */
        pcount=0;
        bool black=false;
        while(pcount < w) {
            if (sprite[datandx]!=0xff)
            {
                if (black) {
                    gsetcolor(c);
                    gdrawd(sprite[datandx]-1,0);
                }
                else {
                    gsetcolor(CO_NONE);
                    gdrawd(sprite[datandx]+1,0);
                }
                pcount += (sprite[datandx]);
            } 
            black = !black;
            datandx++;
        }
        row++;
    }
    /* restore color */
    gsetcolor(c);
}