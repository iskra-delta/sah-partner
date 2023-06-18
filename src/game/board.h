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

/* board offset */
#define OFFX(x) (x+70)
#define OFFY(y) (y+16)

/* board coordinates */
extern void bout;   /* outline */
extern void bsq;    /* board squares */

/* masks for pieces */
extern void kingm;
extern void queenm;
extern void rookm;
extern void bishopm;
extern void knightm;
extern void pawnm;

/* sprites for pieces */
extern void king;
extern void queen;
extern void rook;
extern void bishop;
extern void knight;
extern void pawn;

#endif /* __BOARD_H__ */