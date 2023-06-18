/*
 * intro.h
 *
 * intro screen header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 17.07.2022   tstih
 *
 */
#ifndef __INTRO_H__
#define __INTRO_H__

#include <ugpx.h>

#define INTRO_LDRAW_PAUSE   50  /* 400 */
#define CENTER_HOFFSET      210
#define CENTER_VOFFSET      -35
#define TEXT_VPADDING       4

extern void intro_strokes;

extern void astro_font;

extern void intro_draw();

#endif /* __INTRO_H__ */