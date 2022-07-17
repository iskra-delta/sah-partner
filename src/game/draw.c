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
#include <game/draw.h>

void drawline(coord x0, coord y0, coord x1, coord y1) {
    gdrawline(2*x0,y0,2*x1,y1);
    gdrawline(2*x0+1,y0,2*x1+1,y1);
}