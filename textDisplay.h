//Pavlo Khryshcheniuk

#ifndef RYSOWANIE_TEXTDISPLAY_H
#define RYSOWANIE_TEXTDISPLAY_H


#include "display.h"

class TextDisplay : public Display {
public:
    void drawTriangle(int, int, int, int);
    void drawParallelogram(int, int, int, int);
    void drawCircle(int);

};


#endif 