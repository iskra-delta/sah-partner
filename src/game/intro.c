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

void intro_draw() {
    int zoom=3;
    uint16_t *pig = (uint16_t *)&intro_strokes;
    uint16_t len=*pig++;uint16_t width=*pig++;uint16_t height=*pig++;
    uint16_t x=SCREEN_WIDTH/2 - (width/zoom)/2, y=SCREEN_HEIGHT/2 - (height/zoom)/2;
    uint16_t px=*pig++, py=*pig++; len--; /* first point */
    while(len--) {
        drawline(x+px/zoom,y+py/zoom,x+*pig/zoom,y+*(pig+1)/zoom);
        px=*pig++;py=*pig++;
        pause(INTRO_LDRAW_PAUSE);
    }
}