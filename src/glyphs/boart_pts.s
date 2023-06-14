        ;;  board_pts.s
        ;;  
        ;;  board points
        ;; 
        ;;  MIT License (see: LICENSE)
        ;;  copyright(c) 2021 tomaz stih
        ;;  
        ;;  14.06.2023   tstih
        .module board_pts

        .globl  _bout
        .globl  _bsq

        .area _CODE
_bout::
        ;; chessboard outer (trapezoid coords)
        .dw 75, 437, 0, 512, 0, 241
_bsq::
        ;; A8 (trapezoid coords)
        .dw 83, 126, 75, 120, 12, 36
        ;; B8 (trapezoid coords)
        .dw 126, 170, 120, 166, 12, 36
        ;; C8 (trapezoid coords)
        .dw 170, 213, 166, 211, 12, 36
        ;; D8 (trapezoid coords)
        .dw 213, 256, 211, 256, 12, 36
        ;; E8 (trapezoid coords)
        .dw 256, 300, 256, 301, 12, 36
        ;; F8 (trapezoid coords)
        .dw 300, 343, 301, 346, 12, 36
        ;; G8 (trapezoid coords)
        .dw 343, 387, 346, 392, 12, 36
        ;; H8 (trapezoid coords)
        .dw 387, 430, 392, 437, 12, 36
        ;; A7 (trapezoid coords)
        .dw 75, 120, 68, 115, 36, 61
        ;; B7 (trapezoid coords)
        .dw 120, 166, 115, 162, 36, 61
        ;; C7 (trapezoid coords)
        .dw 166, 211, 162, 209, 36, 61
        ;; D7 (trapezoid coords)
        .dw 211, 256, 209, 256, 36, 61
        ;; E7 (trapezoid coords)
        .dw 256, 301, 256, 304, 36, 61
        ;; F7 (trapezoid coords)
        .dw 301, 346, 304, 351, 36, 61
        ;; G7 (trapezoid coords)
        .dw 346, 392, 351, 398, 36, 61
        ;; H7 (trapezoid coords)
        .dw 392, 437, 398, 445, 36, 61
        ;; A6 (trapezoid coords)
        .dw 68, 115, 60, 109, 61, 86
        ;; B6 (trapezoid coords)
        .dw 115, 162, 109, 158, 61, 86
        ;; C6 (trapezoid coords)
        .dw 162, 209, 158, 207, 61, 86 
        ;; D6 (trapezoid coords)
        .dw 209, 256, 207, 256, 61, 86
        ;; E6 (trapezoid coords)
        .dw 256, 304, 256, 305, 61, 86
        ;; F6 (trapezoid coords)
        .dw 304, 351, 305, 354, 61, 86
        ;; G6 (trapezoid coords)
        .dw 351, 398, 354, 403, 61, 86
        ;; H6 (trapezoid coords)
        .dw 398, 445, 403, 452, 61, 86
        ;; A5 (trapezoid coords)
        .dw 60, 109, 53, 104, 86, 112
        ;; B5 (trapezoid coords)
        .dw 109, 158, 104, 155, 86, 112
        ;; C5 (trapezoid coords)
        .dw 158, 207, 155, 206, 86, 112
        ;; D5 (trapezoid coords)
        .dw 207, 256, 206, 256, 86, 112
        ;; E5 (trapezoid coords)
        .dw 256, 305, 256, 307, 86, 112
        ;; F5 (trapezoid coords)
        .dw 305, 354, 307, 358, 86, 112
        ;; G5 (trapezoid coords)
        .dw 354, 403, 358, 409, 86, 112
        ;; H5 (trapezoid coords)
        .dw 403, 452, 409, 460, 86, 112
        ;; A4 (trapezoid coords)
        .dw 53, 104, 45, 98, 112, 139
        ;; B4 (trapezoid coords)
        .dw 104, 155, 98, 150, 112, 139
        ;; C4 (trapezoid coords)
        .dw 155, 206, 150, 203, 112, 139
        ;; D4 (trapezoid coords)
        .dw 206, 256, 203, 256, 112, 139
        ;; E4 (trapezoid coords)
        .dw 256, 307, 256, 309, 112, 139
        ;; F4 (trapezoid coords)
        .dw 307, 358, 309, 362, 112, 139
        ;; G4 (trapezoid coords)
        .dw 358, 409, 362, 414, 112, 139
        ;; H4 (trapezoid coords)
        .dw 409, 460, 414, 467, 112, 139
        ;; A3 (trapezoid coords)
        .dw 45, 98, 38, 93, 139, 166
        ;; B3 (trapezoid coords)
        .dw 98, 150, 93, 147, 139, 166
        ;; C3 (trapezoid coords)
        .dw 150, 203, 147, 202, 139, 166
        ;; D3 (trapezoid coords)
        .dw 203, 256, 202, 256, 139, 166
        ;; E3 (trapezoid coords)
        .dw 256, 309, 256, 311, 139, 166
        ;; F3 (trapezoid coords)
        .dw 309, 362, 311, 366, 139, 166
        ;; G3 (trapezoid coords)
        .dw 362, 414, 366, 420, 139, 166
        ;; H3 (trapezoid coords)
        .dw 414, 467, 420, 475, 139, 166
        ;; A2 (trapezoid coords)
        .dw 38, 93, 30, 86, 166, 194
        ;; B2 (trapezoid coords)
        .dw 93, 147, 86, 143, 166, 194
        ;; C2 (trapezoid coords)
        .dw 147, 202, 143, 200, 166, 194
        ;; D2 (trapezoid coords)
        .dw 202, 256, 200, 256, 166, 194
        ;; E2 (trapezoid coords)
        .dw 256, 311, 256, 312, 166, 194
        ;; F2 (trapezoid coords)
        .dw 311, 366, 312, 369, 166, 194
        ;; G2 (trapezoid coords)
        .dw 366, 420, 369, 426, 166, 194
        ;; H2 (trapezoid coords)
        .dw 420, 475, 426, 482, 166, 194
        ;; A1 (trapezoid coords)
        .dw 30, 86, 23, 81, 194, 223
        ;; B1 (trapezoid coords)
        .dw 86, 143, 81, 140, 194, 223
        ;; C1 (trapezoid coords)
        .dw 143, 200, 140, 198, 194, 223
        ;; D1 (trapezoid coords)
        .dw 200, 256, 198, 256, 194, 223
        ;; E1 (trapezoid coords)
        .dw 256, 312, 256, 315, 194, 223
        ;; F1 (trapezoid coords)
        .dw 312, 369, 315, 373, 194, 223
        ;; G1 (trapezoid coords)
        .dw 369, 426, 373, 432, 194, 223
        ;; H1 (trapezoid coords)
        .dw 426, 482, 432, 490, 194, 223