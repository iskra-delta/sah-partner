/*
 * main.c
 *
 * iskra delta partner chess
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 17.07.2022   tstih
 *
 */
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include <ugpx.h>

#include <game/chessboard.h>

/* ----- main loop --------------------------------------------------------- */
int main() {

    /* enter graphics mode */
    ginit(RES_1024x256);

    /* clear screen */
    gcls();

    /* draw board */
    board_draw(0,0);

    /* exit graphics mode */
    gexit();

    /* all well.. */
    return 0;
}