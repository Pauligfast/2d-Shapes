//Pavlo Khryshcheniuk

#ifndef RYSOWANIE_PARELLELOGRAM_H
#define RYSOWANIE_PARELLELOGRAM_H


#include "display.h"
#include "shape.h"

class Parallelogram : public Shape {

private:
    int a1, a2, b1, b2;

public:
    Parallelogram(Display*, int, int, int, int);
    void draw();

};


#endif //RYSOWANIE_PARELLELOGRAM_H