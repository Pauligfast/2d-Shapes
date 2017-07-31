//Pavlo Khryshcheniuk

#ifndef RYSOWANIE_DISPLAY_H
#define RYSOWANIE_DISPLAY_H

class Display {
public:
    virtual void drawTriangle(int, int, int, int) = 0;
    virtual void drawParallelogram(int, int, int, int) = 0;
    virtual void drawCircle(int) = 0;
};


#endif