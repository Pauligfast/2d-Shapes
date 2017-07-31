//Pavlo Khryshcheniuk

#ifndef RYSOWANIE_SHAPE_H
#define RYSOWANIE_SHAPE_H


#include "display.h"

class Shape {
public:
    Shape();
    Shape(Display*);
    void changeDisplay(Display*);
    virtual void draw() = 0;
protected:
    Display* display;

};


#endif 