/*
 * engine.h
 *
 * chess engine
 *
 * chess engine by RatinsasPA 
 * https://github.com/RatinsasPA/chess-engine
 *
 * 17.07.2022   tstih
 *
 */
#ifndef __ENGINE_H__
#define __ENGINE_H__

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

#include <game/console.h>

/* some useful macros and definitions */
#define INF 32000
#define MAX(a,b) ((a)>(b) ? (a) : (b))
#define MIN(a,b) ((a)<(b) ? (a) : (b))

/*Phase of Game*/
typedef enum {
    END, MID, OPEN
} state;

/*Board Representation*/
typedef enum {
    A1, A2, A3, A4, A5, A6, A7, A8,
    B1, B2, B3, B4, B5, B6, B7, B8,
    C1, C2, C3, C4, C5, C6, C7, C8,
    D1, D2, D3, D4, D5, D6, D7, D8,
    E1, E2, E3, E4, E5, E6, E7, E8,
    F1, F2, F3, F4, F5, F6, F7, F8,
    G1, G2, G3, G4, G5, G6, G7, G8,
    H1, H2, H3, H4, H5, H6, H7, H8,
    CASTLE, EP, LAST
} squares;

/*Pieces*/
typedef enum {
    EMPTY,
    WHITE_KING, WHITE_QUEEN, WHITE_ROOK,
    WHITE_BISHOP, WHITE_KNIGHT, WHITE_PAWN,
    BLACK_KING, BLACK_QUEEN, BLACK_ROOK,
    BLACK_BISHOP, BLACK_KNIGHT, BLACK_PAWN
} pieces;

/* chess matrix */
enum { FILE_A, FILE_B, FILE_C, FILE_D, FILE_E, FILE_F, FILE_G, FILE_H };
enum { RANK_1, RANK_2, RANK_3, RANK_4, RANK_5, RANK_6, RANK_7, RANK_8 };

/* convert piece to char */
#define PIECE2CHAR(p)           (" KQRBNPkqrbnp"[p])
#define SQ(f,r)                 ((f)*(8) + (r))

/* chess board struct */
extern uint8_t board[];

/* print the board */
extern void print_board();

/* initialize board */
extern void init_board();

/* enter data on the console */
extern bool con_input(char *move);

/* the end */
extern void con_game_over(char *text);

#endif /* __ENGINE_H__ */