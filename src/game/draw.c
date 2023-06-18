/*
 * draw.h
 *
 * adjusted routines for lower resolution
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 17.07.2022   tstih
 *
 */
#include <stdbool.h>
#include <stdlib.h>
#include <game/draw.h>


void drawline(coord x0, coord y0, coord x1, coord y1) {
    gdrawline(2*x0,y0,2*x1,y1);
    gdrawline(2*x0+1,y0,2*x1+1,y1);
}

void drawrect(coord x0, coord y0, coord x1, coord y1) {
    drawline(x0,y0,x1,y0);
    drawline(x1,y0,x1,y1);
    drawline(x1,y1,x0,y1);
    drawline(x0,y1,x0,y0);
}

void fillrect(coord x0, coord y0, coord x1, coord y1) {
    for(int y=y0;y<y1;y++)
        drawline(x0,y,x1,y);
}

static void _bresenham_init(
    bresenham_t *b, 
    coord x0, coord y0, 
    coord x1, coord y1) {
    b->x0=x0; b->y0=y0; b->x1=x1; b->y1=y1;
    b->dx = abs(x1-x0); b->sx = x0<x1 ? 1 : -1;
    b->dy = abs(y1-y0); b->sy = y0<y1 ? 1 : -1; 
    b->err = (b->dx>b->dy ? b->dx : -b->dy)/2;
}

static bool _bresenham_next_y(bresenham_t *b) {   
    for(;;){
        if (b->x0==b->x1 && b->y0==b->y1) return false;
        b->e2 = b->err;
        if (b->e2 >-b->dx) { b->err -= b->dy; b->x0 += b->sx; }
        if (b->e2 < b->dy) { b->err += b->dx; b->y0 += b->sy; return true; }
    }
}

void filltrap(
    coord x00, coord x01, /* top left and right */
    coord x10, coord x11, /* bottom left and right */
    coord y0, coord y1,
    color c) {

    bresenham_t b0, b1;
    _bresenham_init(&b0,x00,y0,x10,y1);
    _bresenham_init(&b1,x01,y0,x11,y1);
    gsetcolor(c);
    do {
        gdrawline(2*b0.x0,b0.y0,2*b1.x0+1,b1.y0);
    } while (_bresenham_next_y(&b0) && _bresenham_next_y(&b1));
    gsetcolor(CO_FORE);
}

void drawtrap(
    coord x00, coord x01, /* top left and right */
    coord x10, coord x11, /* bottom left and right */
    coord y0, coord y1) {
    drawline(x00,y0,x01,y0);
    drawline(x10,y1,x11,y1);
    drawline(x00,y0,x10,y1);
    drawline(x01,y0,x11,y1);
}