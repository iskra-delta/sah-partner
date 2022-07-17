/*
 * chessboard.h
 *
 * chessboard rleated functions header
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 17.07.2022   tstih
 *
 */
#ifndef __CHESSBOARD_H__
#define __CHESSBOARD_H__

/* board dimensions */
#define BOARD_WIDTH     400
#define BOARD_HEIGHT    200

/* bpard reduction factor */
#define BOARD_HOR_FAC   5
#define BOARD_VER_FAC   1


extern void board_draw(coord x, coord y);

#endif /* __CHESSBOARD_H__ */