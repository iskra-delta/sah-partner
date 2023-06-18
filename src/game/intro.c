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
#include <game/screen.h>

/* masks for figures */
extern void kingm;
extern void queenm;
extern void rookm;
extern void bishopm;
extern void knightm;
extern void pawnm;

static int _intro_title_draw(char *key, char *text, int x, int y) {
    
    dim_t dim; /* font dimensions */
    void *font=&astro_font;
    gmetext(font,"CTRL C ",&dim);

    /* now draw */
    gputtext(font,key,x,y); 
    gputtext(font,key,x + 1,y);
    gputtext(font,text,x + dim.w,y);

    return dim.h + TEXT_VPADDING;
}

void intro_draw() {
    
    int zoom=3;
    uint16_t *pig = (uint16_t *)&intro_strokes;
    uint16_t len=*pig++;uint16_t width=*pig++;uint16_t height=*pig++;
    uint16_t x=SCREEN_WIDTH/2 - (width/zoom)/2, y=SCREEN_HEIGHT/2 - (height/zoom)/2 + CENTER_VOFFSET;
    uint16_t px=*pig++, py=*pig++; len--;
    while(len--) {
        gdrawline(2*(x+px/zoom),y+py/zoom,2*(x+*pig/zoom),y+*(pig+1)/zoom);
        px=*pig++;py=*pig++;
    }
    
    /* bottom */
    int xt=x + CENTER_HOFFSET, 
        yt=y + height/zoom + TEXT_VPADDING;
    
    yt = yt + _intro_title_draw("1", "SVETLE FIGURE", xt, yt);
    yt = yt + _intro_title_draw("2", "TEMNE FIGURE", xt, yt);
    yt = yt + _intro_title_draw("CTRL C", "IZHOD", xt, yt);
}