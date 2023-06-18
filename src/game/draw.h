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
#ifndef __DRAW_H__
#define __DRAW_H__

#include <ugpx.h>

typedef struct {
    int x, y;
} point;

typedef struct bresenham_s {
    int dx; int dy;
    int sx; int sy;
    int err; int e2;
    int x0; int y0; int x1; int y1;
} bresenham_t;

extern void drawline(coord x0, coord y0, coord x1, coord y1);
extern void drawrect(coord x0, coord y0, coord x1, coord y1);
extern void fillrect(coord x0, coord y0, coord x1, coord y1);
extern void filltrap(
    coord x00, coord x01, /* top left and right */
    coord x10, coord x11, /* bottom left and right */
    coord y0, coord y1, color c);
extern void drawtrap(
    coord x00, coord x01, /* top left and right */
    coord x10, coord x11, /* bottom left and right */
    coord y0, coord y1);

#endif /* __DRAW_H__ */