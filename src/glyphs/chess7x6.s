        ;;  chess7x6.s
        ;;  
        ;;  chess7x6_font
        ;; 
        ;;  notes: see font.h for format details
        ;;  
        ;;  MIT License (see: LICENSE)
        ;;  copyright(c) 2021 tomaz stih
        ;;  
        ;;  19.06.2023   tstih
        .module chess7x6_font

        .globl _chess7x6_font

        .area _CODE
_chess7x6_font::
        ;; font header
        .db 128                 ; font flags
        .db 6                   ; width (max width for proportional)
        .db 5                   ; height
        .db 65                  ; first ascii
        .db 80                  ; last ascii

        ;; glpyh offsets
        .dw 0x0025, 0x0033, 0x0044, 0x0051, 0x005F, 0x0070, 0x007F, 0x008E
        .dw 0x009D, 0x00AE, 0x00BC, 0x00CD, 0x00DD, 0x00EE, 0x00FF, 0x010B

        ;; ascii 65: 'A'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 10                  ; # moves
        .db 4                   ; x origin
        .db 4                   ; y origin
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 44                  ; move dx=1, dy=-1, color=none (move only!)
        .db 12                  ; move dx=0, dy=-1, color=none (move only!)
        .db 252                 ; move dx=3, dy=-3, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        ;; ascii 66: 'B'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 13                  ; # moves
        .db 5                   ; x origin
        .db 4                   ; y origin
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 44                  ; move dx=1, dy=-1, color=none (move only!)
        .db 64                  ; move dx=2, dy=0, color=none (move only!)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 67: 'C'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 9                   ; # moves
        .db 5                   ; x origin
        .db 4                   ; y origin
        .db 28                  ; move dx=0, dy=-3, color=none (move only!)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 68: 'D'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 10                  ; # moves
        .db 5                   ; x origin
        .db 4                   ; y origin
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 69: 'E'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 13                  ; # moves
        .db 5                   ; x origin
        .db 0                   ; y origin
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 70: 'F'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 11                  ; # moves
        .db 5                   ; x origin
        .db 0                   ; y origin
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        ;; ascii 71: 'G'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 11                  ; # moves
        .db 5                   ; x origin
        .db 4                   ; y origin
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 84                  ; move dx=2, dy=-2, color=none (move only!)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        ;; ascii 72: 'H'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 11                  ; # moves
        .db 0                   ; x origin
        .db 5                   ; y origin
        .db 156                 ; move dx=0, dy=-3, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 40                  ; move dx=1, dy=1, color=none (move only!)
        .db 8                   ; move dx=0, dy=1, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 44                  ; move dx=1, dy=-1, color=none (move only!)
        .db 12                  ; move dx=0, dy=-1, color=none (move only!)
        .db 152                 ; move dx=0, dy=3, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        ;; ascii 73: 'I'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 13                  ; # moves
        .db 5                   ; x origin
        .db 4                   ; y origin
        .db 126                 ; move dx=-3, dy=-3, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 144                 ; move dx=0, dy=2, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 74: 'J'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 10                  ; # moves
        .db 1                   ; x origin
        .db 1                   ; y origin
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 250                 ; move dx=-3, dy=3, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        ;; ascii 75: 'K'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 13                  ; # moves
        .db 4                   ; x origin
        .db 4                   ; y origin
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 42                  ; move dx=-1, dy=1, color=none (move only!)
        .db 16                  ; move dx=0, dy=2, color=none (move only!)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 76: 'L'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 12                  ; # moves
        .db 4                   ; x origin
        .db 3                   ; y origin
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 162                 ; move dx=-1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        ;; ascii 77: 'M'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 13                  ; # moves
        .db 5                   ; x origin
        .db 1                   ; y origin
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 226                 ; move dx=-3, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 98                  ; move dx=-3, dy=0, color=none (move only!)
        .db 34                  ; move dx=-1, dy=0, color=none (move only!)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 78: 'N'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 13                  ; # moves
        .db 5                   ; x origin
        .db 1                   ; y origin
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 120                 ; move dx=3, dy=3, color=none (move only!)
        .db 140                 ; move dx=0, dy=-1, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
        ;; ascii 79: 'O'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 8                   ; # moves
        .db 0                   ; x origin
        .db 1                   ; y origin
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 224                 ; move dx=3, dy=0, color=fore (set)
        .db 160                 ; move dx=1, dy=0, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 210                 ; move dx=-2, dy=2, color=fore (set)
        ;; ascii 80: 'P'
        .db 32                  ; class(bits 5-7)
        .db 5                   ; width
        .db 5                   ; height
        .db 14                  ; # moves
        .db 4                   ; x origin
        .db 4                   ; y origin
        .db 148                 ; move dx=0, dy=-2, color=fore (set)
        .db 172                 ; move dx=1, dy=-1, color=fore (set)
        .db 174                 ; move dx=-1, dy=-1, color=fore (set)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 40                  ; move dx=1, dy=1, color=none (move only!)
        .db 32                  ; move dx=1, dy=0, color=none (move only!)
        .db 194                 ; move dx=-2, dy=0, color=fore (set)
        .db 170                 ; move dx=-1, dy=1, color=fore (set)
        .db 136                 ; move dx=0, dy=1, color=fore (set)
        .db 168                 ; move dx=1, dy=1, color=fore (set)
        .db 192                 ; move dx=2, dy=0, color=fore (set)
