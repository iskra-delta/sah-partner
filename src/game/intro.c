/*
 * intro.c
 *
 * intro screen
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 17.07.2022   tstih
 *
 */
#include <stdint.h>
#include <ugpx.h>

#include <game/intro.h>
#include <game/draw.h>
#include <game/util.h>
#include <game/screen.h>

/* masks for figures */
extern void kingm;
extern void queenm;
extern void rookm;
extern void bishopm;
extern void knightm;
extern void pawnm;

void intro_draw() {
    int zoom=3;
    uint16_t *pig = (uint16_t *)&intro_strokes;
    uint16_t len=*pig++;uint16_t width=*pig++;uint16_t height=*pig++;
    uint16_t x=SCREEN_WIDTH/2 - (width/zoom)/2, y=SCREEN_HEIGHT/2 - (height/zoom)/2 + TEXT_VOFFSET;
    uint16_t px=*pig++, py=*pig++; len--; /* first point */
    while(len--) {
        drawline(x+px/zoom,y+py/zoom,x+*pig/zoom,y+*(pig+1)/zoom);
        px=*pig++;py=*pig++;
        pause(INTRO_LDRAW_PAUSE);
    }
    /* bottom */
    int xt=x + TEXT_CENTER_OFFSET, 
        yt=y + height/zoom + TEXT_VPADDING;
    gputtext(&bc_font,"1",xt,yt); 
    gputtext(&bc_font,"1",xt + 1,yt);
    gputtext(&bc_font,"SVETLE FIGURE",xt + TEXT_KEY_WIDTH,yt);

    gputtext(&bc_font,"2",xt,yt + TEXT_HEIGHT); 
    gputtext(&bc_font,"2",xt + 1,yt + TEXT_HEIGHT);
    gputtext(&bc_font,"TEMNE FIGURE",xt + TEXT_KEY_WIDTH,yt + TEXT_HEIGHT);
    
    gputtext(&bc_font,"Ctrl + C", xt,yt + 2 * TEXT_HEIGHT); 
    gputtext(&bc_font,"Ctrl + C", xt + 1,yt + 2 * TEXT_HEIGHT);
    gputtext(&bc_font,"IZHOD", xt + TEXT_KEY_WIDTH,yt + 2 * TEXT_HEIGHT);

    gputglyph(&kingm,0,0);
    gputglyph(&queenm,45,0);
    gputglyph(&rookm,2*45,0);
    gputglyph(&bishopm,3*45,0);
    gputglyph(&knightm,4*45,0);
    gputglyph(&pawnm,5*45,0);


}