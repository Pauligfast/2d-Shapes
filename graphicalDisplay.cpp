//Pavlo Khryshcheniuk

#include <iostream>
#include "graphicalDisplay.h"

void GraphicalDisplay::drawCircle(int r) {
    for (int i = 0; i <= 2 * r; i++) {
        for (int j = 0; j <= 2 * r; j++) {
            if ((r - j)*(r - j) + (r - i)*(r - i) <= r * r)
                std::cout << "c";


            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}

void GraphicalDisplay::drawTriangle(int a1, int a2, int b1, int b2) {
    bool boo1, boo2, boo3;
    int x1 = 0, y1 = -b2, x2 = a1, y2 = a2 - b2, x3 = b1, y3 = 0, x4, y4;
    int wid = a1 + 1, hig = a2 - b2;
    if (b1 > a1) wid = b1 + 1;

    for (int i = hig; i >= 0; i--) {
        for (int j = 0; j < wid; j++) {
            x4 = j;
            y4 = i;
            boo1 = (x4 - x2) * (y1 - y2) - (x1 - x2) * (y4 - y2) <= 0;
            boo2 = (x4 - x3) * (y2 - y3) - (x2 - x3) * (y4 - y3) <= 0;
            boo3 = (x4 - x1) * (y3 - y1) - (x3 - x1) * (y4 - y1) <= 0;

            if (((boo1 == boo2) && (boo2 == boo3))) {
                std::cout << 't';
            } else
                std::cout << ' ';
        }
        std::cout << std::endl;
    }


}

void GraphicalDisplay::drawParallelogram(int a1, int a2, int b1, int b2) {
    int x1 = 0, x2 = a1, x3 = a1 + b1, x4 = b1, y1 = 0, y2 = a2, y3 = a2 - b2, y4 = -b2;


    for (int i = (a2 - b2); i >= 0; i--) {
        for (int j = 0; j <= x3; j++) {
            bool d1;
            d1 = (y4 - y2)*(j - x3) - (i - y2)*(x1 - x3) <= 0;
            bool d2;
            d2 = (y2 - y1)*(j - x4) -(i - y1)* (x3 - x4) <= 0;
            bool d3;
            d3 = (y1 - y4)*(j - x1) - (i - y4)*(x4 - x1) <= 0;



            bool u1;
            u1 = (y4 - y3)*(j - x2) - (i - y3)*(x1 - x2) <= 0;
            bool u2;
            u2 = (y3 - y2)*(j - x3) - (i - y2)*(x2 - x3) <= 0;
            bool u3;
            u3 = (y2 - y4)*(j - x1) - (i - y4)*(x3 - x1) <= 0;

            if ((d1 == d2) && (d2 == d3) || ((u1 == u2) && (u2 == u3)))
                std::cout << "p";
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}