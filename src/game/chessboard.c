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
#include <ugpx.h>

#include <game/chessboard.h>
#include <game/draw.h>

void board_draw(coord x, coord y) {
    
    /* calculate total dx */
    coord dx = BOARD_HEIGHT / BOARD_HOR_FAC;

    /* draw border */
    //drawline(dx,0,BOARD_WIDTH-dx,0);
    //drawline(dx,0,0,BOARD_HEIGHT);
    //drawline(BOARD_WIDTH-dx,0,BOARD_WIDTH,BOARD_HEIGHT);
    //drawline(0,BOARD_HEIGHT,BOARD_WIDTH,BOARD_HEIGHT);

    /* draw vert lines */
    coord l0=BOARD_WIDTH-2*dx, l1=BOARD_WIDTH;
    coord step0=l0/8, step1=l1/8;
    int x0=dx, x1=0;
    int i;
    for (i=0;i<=8;i++) {
        drawline(x0,0,x1,BOARD_HEIGHT);
        x0+=step0; x1+=step1;
    }

    /* draw horz lines */
    int remainder=0,stepy;
    y=0;
    for (i=0;i<=8;i++) {
        stepy=BOARD_HEIGHT / 8 - (8-i) * BOARD_VER_FAC;
        remainder += ((8-i) * BOARD_VER_FAC)/(7-i);
        drawline(0,y,BOARD_WIDTH,y);
        y+=stepy+remainder;
    }
}