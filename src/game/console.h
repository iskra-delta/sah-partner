/*
 * console.h
 *
 * console functions (data entry and print)
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 19.06.2023   tstih
 *
 */
#ifndef __CONSOLE_H__
#define __CONSOLE_H__

#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

#include <ugpx.h>

#include <game/util.h>

/* console dimensions */
#define CON_ROWS    5
#define CON_COLS    10

/* special keys */
#define K_ESC       27
#define K_CTRLC     3

/* main console font */
extern void font12x8_font;

/* rectangle */
#define RECT_ENTRY  { 0, 80, 200, 90 }
#define RECT_ERROR  { 0, 100, 200, 110 }
#define RECT_END    { 320, 112, 704, 144 }

/* initialize console */
extern void con_init();

/* display console error */
extern void con_error(char *msg);

/* enter data on the console */
extern bool con_input(char *move);

/* the end */
extern void con_game_over(char *text);

#endif /* __CONSOLE_H__ */