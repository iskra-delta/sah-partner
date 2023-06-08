/*
 * chessboard.c
 *
 * chessboard rleated functions
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 17.07.2022   tstih
 *
 */
#include <stdbool.h>

#include <ugpx.h>

#include <game/board.h>
#include <game/draw.h>

void board_draw(coord x, coord y) {
    drawrect(x,y,x+240,y+240);
    for(int i=0;i<8;i++) 
        for(int j=0;j<8;j++) {
            bool black=j%2;
            if (i%2) black=!black;
            if (!black) fillrect(x+30*j,y+30*i,x+30*j+30,y+30*i+30);
        }
}