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

extern void drawline(coord x0, coord y0, coord x1, coord y1);
extern void drawrect(coord x0, coord y0, coord x1, coord y1);
extern void fillrect(coord x0, coord y0, coord x1, coord y1);

#ifdef _3D
extern void fillquad(point *points);
#endif /* _3D */

#endif /* __DRAW_H__ */