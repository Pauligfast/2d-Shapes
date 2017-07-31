//Pavlo Khryshcheniuk

#ifndef RYSOWANIE_GRAPHICALDISPLAY_H
#define RYSOWANIE_GRAPHICALDISPLAY_H


#include "display.h"

class GraphicalDisplay : public Display {
public:
    void drawTriangle(int, int, int, int);
    void drawParallelogram(int, int, int, int);
    void drawCircle(int);


};


#endif //RYSOWANIE_GRAPHICALDISPLAY_H