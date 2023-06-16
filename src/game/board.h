/*
 * board.h
 *
 * chessboard rleated functions header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 17.07.2022   tstih
 *
 */
#ifndef __BOARD_H__
#define __BOARD_H__

/* board dimensions */
#define BOARD_WIDTH     400
#define BOARD_HEIGHT    200

/* bpard reduction factor */
#define BOARD_HOR_FAC   5
#define BOARD_VER_FAC   1

/* board coordinates */
extern void bout;   /* outline */
extern void bsq;    /* 8x8 "squares" */

/* masks for figures */
extern void kingm;
extern void queenm;
extern void rookm;
extern void bishopm;
extern void knightm;
extern void pawnm;

extern void board2d_draw(coord x, coord y);
extern void board3d_draw();

#endif /* __BOARD_H__ */