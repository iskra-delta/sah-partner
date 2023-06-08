/*
 * draw.h
 *
 * adjusted routines for lower resolution
 *
 * MIT License (see: LICENSE)
 * Copyright (c) 2022 Tomaz Stih
 *
 * 17.07.2022   tstih
 *
 */
#include <stdlib.h>
#include <game/draw.h>

void drawline(coord x0, coord y0, coord x1, coord y1) {
    gdrawline(2*x0,y0,2*x1,y1);
    gdrawline(2*x0+1,y0,2*x1+1,y1);
}

void drawrect(coord x0, coord y0, coord x1, coord y1) {
    drawline(x0,y0,x1,y0);
    drawline(x1,y0,x1,y1);
    drawline(x1,y1,x0,y1);
    drawline(x0,y1,x0,y0);
}

void fillrect(coord x0, coord y0, coord x1, coord y1) {
    for(int y=y0;y<y1;y++)
        drawline(x0,y,x1,y);
}

#ifdef _3D
static int _compute_intersection(int scanline, point *p1, point *p2) {
    if (p1->y == p2->y) return p1->x;
    return p1->x + ((scanline - p1->y) * (p2->x - p1->x)) / (p2->y - p1->y);
}

void fillquad(point *points) {
    int y_min = points[0].y, y_max = points[0].y;

    // Find min and max Y values.
    for (int i = 1; i < 4; ++i) {
        if (points[i].y < y_min) y_min = points[i].y;
        if (points[i].y > y_max) y_max = points[i].y;
    }

    int intersections[4];
    int num_intersections;

    // Loop from min Y to max Y.
    for (int y = y_min; y <= y_max; ++y) {

        num_intersections=0;

        // Loop over each edge.
        for (int i = 0; i < 4; ++i) {
            if ((points[i].y <= y && points[(i + 1) % 4].y > y) ||
                (points[i].y > y && points[(i + 1) % 4].y <= y)) {
                intersections[num_intersections] = _compute_intersection(y, &(points[i]), &(points[(i + 1) % 4]));
                num_intersections++;
            }
        }

        // Sort intersections by x.
        for (int i = 0; i < num_intersections - 1; ++i) {
            for (int j = 0; j < num_intersections - 1 - i; ++j) {
                if (intersections[j] > intersections[j + 1]) {
                    int temp = intersections[j];
                    intersections[j] = intersections[j + 1];
                    intersections[j + 1] = temp;
                }
            }
        }

        // Draw lines between pairs of intersections.
        for (int i = 0; i < num_intersections; i += 2) {
            drawline(intersections[i], y, intersections[i + 1], y);
        }
    }
}
#endif /* _3D */