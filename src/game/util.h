/*
 * util.h
 *
 * utility funtions header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 17.07.2022   tstih
 *
 */
#ifndef __UTIL_H__
#define __UTIL_H__

#include <stdint.h>
#include <stdbool.h>
#include <ugpx.h>

/* pause for loops cycles */
extern void pause(unsigned int loops);

/* find c in s */
extern int strch(char *s, char c);

/* draw LINES 101xxxxx sprite */
extern void gputsprite(int x, int y, uint8_t *sprite, color c);

#endif /* __UTIL_H__ */