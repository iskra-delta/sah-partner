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
#define TEXT_CENTER_OFFSET  176
#define TEXT_HEIGHT         10
#define TEXT_KEY_WIDTH      110
#define TEXT_VPADDING       4
#define TEXT_VOFFSET        -20

extern void intro_strokes;

extern void bc_font;

extern void intro_draw();

#endif /* __INTRO_H__ */