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
        .dw 65, 375, 0, 440, 0, 220
_bsq::
        ;; A8 (trapezoid coords)
        .dw 72, 109, 65, 104, 11, 33
        ;; B8 (trapezoid coords)
        .dw 109, 146, 104, 142, 11, 33
        ;; C8 (trapezoid coords)
        .dw 146, 183, 142, 181, 11, 33
        ;; D8 (trapezoid coords)
        .dw 183, 220, 181, 220, 11, 33
        ;; E8 (trapezoid coords)
        .dw 220, 258, 220, 259, 11, 33
        ;; F8 (trapezoid coords)
        .dw 258, 295, 259, 298, 11, 33
        ;; G8 (trapezoid coords)
        .dw 295, 332, 298, 336, 11, 33
        ;; H8 (trapezoid coords)
        .dw 332, 369, 336, 375, 11, 33
        ;; A7 (trapezoid coords)
        .dw 65, 104, 59, 99, 33, 56
        ;; B7 (trapezoid coords)
        .dw 104, 142, 99, 140, 33, 56
        ;; C7 (trapezoid coords)
        .dw 142, 181, 140, 180, 33, 56
        ;; D7 (trapezoid coords)
        .dw 181, 220, 180, 220, 33, 56
        ;; E7 (trapezoid coords)
        .dw 220, 259, 220, 261, 33, 56
        ;; F7 (trapezoid coords)
        .dw 259, 298, 261, 301, 33, 56
        ;; G7 (trapezoid coords)
        .dw 298, 336, 301, 342, 33, 56
        ;; H7 (trapezoid coords)
        .dw 336, 375, 342, 382, 33, 56
        ;; A6 (trapezoid coords)
        .dw 59, 99, 52, 94, 56, 79
        ;; B6 (trapezoid coords)
        .dw 99, 140, 94, 136, 56, 79
        ;; C6 (trapezoid coords)
        .dw 140, 180, 136, 178, 56, 79
        ;; D6 (trapezoid coords)
        .dw 180, 220, 178, 220, 56, 79
        ;; E6 (trapezoid coords)
        .dw 220, 261, 220, 262, 56, 79
        ;; F6 (trapezoid coords)
        .dw 261, 301, 262, 304, 56, 79
        ;; G6 (trapezoid coords)
        .dw 301, 342, 304, 346, 56, 79
        ;; H6 (trapezoid coords)
        .dw 342, 382, 346, 388, 56, 79
        ;; A5 (trapezoid coords)
        .dw 52, 94, 46, 90, 79, 103
        ;; B5 (trapezoid coords)
        .dw 94, 136, 90, 133, 79, 103
        ;; C5 (trapezoid coords)
        .dw 136, 178, 133, 177, 79, 103
        ;; D5 (trapezoid coords)
        .dw 178, 220, 177, 220, 79, 103
        ;; E5 (trapezoid coords)
        .dw 220, 262, 220, 264, 79, 103
        ;; F5 (trapezoid coords)
        .dw 262, 304, 264, 308, 79, 103
        ;; G5 (trapezoid coords)
        .dw 304, 346, 308, 351, 79, 103
        ;; H5 (trapezoid coords)
        .dw 346, 388, 351, 395, 79, 103
        ;; A4 (trapezoid coords)
        .dw 46, 90, 39, 84, 103, 127
        ;; B4 (trapezoid coords)
        .dw 90, 133, 84, 130, 103, 127
        ;; C4 (trapezoid coords)
        .dw 133, 177, 130, 175, 103, 127
        ;; D4 (trapezoid coords)
        .dw 177, 220, 175, 220, 103, 127
        ;; E4 (trapezoid coords)
        .dw 220, 264, 220, 265, 103, 127
        ;; F4 (trapezoid coords)
        .dw 264, 308, 265, 310, 103, 127
        ;; G4 (trapezoid coords)
        .dw 308, 351, 310, 356, 103, 127
        ;; H4 (trapezoid coords)
        .dw 351, 395, 356, 401, 103, 127
        ;; A3 (trapezoid coords)
        .dw 39, 84, 33, 80, 127, 152
        ;; B3 (trapezoid coords)
        .dw 84, 130, 80, 127, 127, 152
        ;; C3 (trapezoid coords)
        .dw 130, 175, 127, 174, 127, 152
        ;; D3 (trapezoid coords)
        .dw 175, 220, 174, 220, 127, 152
        ;; E3 (trapezoid coords)
        .dw 220, 265, 220, 267, 127, 152
        ;; F3 (trapezoid coords)
        .dw 265, 310, 267, 314, 127, 152
        ;; G3 (trapezoid coords)
        .dw 310, 356, 314, 361, 127, 152
        ;; H3 (trapezoid coords)
        .dw 356, 401, 361, 408, 127, 152
        ;; A2 (trapezoid coords)
        .dw 33, 80, 26, 74, 152, 178
        ;; B2 (trapezoid coords)
        .dw 80, 127, 74, 123, 152, 178
        ;; C2 (trapezoid coords)
        .dw 127, 174, 123, 172, 152, 178
        ;; D2 (trapezoid coords)
        .dw 174, 220, 172, 220, 152, 178
        ;; E2 (trapezoid coords)
        .dw 220, 267, 220, 268, 152, 178
        ;; F2 (trapezoid coords)
        .dw 267, 314, 268, 317, 152, 178
        ;; G2 (trapezoid coords)
        .dw 314, 361, 317, 366, 152, 178
        ;; H2 (trapezoid coords)
        .dw 361, 408, 366, 414, 152, 178
        ;; A1 (trapezoid coords)
        .dw 26, 74, 20, 70, 178, 204
        ;; B1 (trapezoid coords)
        .dw 74, 123, 70, 120, 178, 204
        ;; C1 (trapezoid coords)
        .dw 123, 172, 120, 170, 178, 204
        ;; D1 (trapezoid coords)
        .dw 172, 220, 170, 220, 178, 204
        ;; E1 (trapezoid coords)
        .dw 220, 268, 220, 271, 178, 204
        ;; F1 (trapezoid coords)
        .dw 268, 317, 271, 321, 178, 204
        ;; G1 (trapezoid coords)
        .dw 317, 366, 321, 371, 178, 204
        ;; H1 (trapezoid coords)
        .dw 366, 414, 371, 421, 178, 204