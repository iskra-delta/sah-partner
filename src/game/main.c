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

#include <game/console.h>
#include <game/intro.h>
#include <game/board.h>

extern void cmd_white(char *dummy);
extern void cmd_black(char *dummy);
extern void play(int black);

/* ----- main loop --------------------------------------------------------- */
int main() {

    /* enter graphics mode */
    ginit(RES_1024x256);

    /* game loop */
    bool the_end=false;
    while (!the_end) {
        /* clear screen */
        gcls();

        /* draw board */
        intro_draw();

        /* process command */
        char c;
        while (!the_end) {
            /* wait for key press */
            while(!(c=kbhit()));
            /* Process the key */
            if (c==K_CTRLC) the_end=true;
            else if (c=='1') { gcls(); play(0); the_end=true; }
            else if (c=='2') { gcls(); play(1); the_end=true; }
        }
    }
        
    /* clear screen */
    gcls();

    /* exit graphics mode */
    gexit();

    /* all well.. */
    return 0;
}