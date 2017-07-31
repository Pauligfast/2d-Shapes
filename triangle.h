//Pavlo Khryshcheniuk

#ifndef RYSOWANIE_TRIANGLE_H
#define RYSOWANIE_TRIANGLE_H


#include "shape.h"

class Triangle : public Shape {
public:
    Triangle(Display*, int, int, int, int);
    void draw();
private:
    int a1, a2, b1, b2;


};


#endif //RYSOWANIE_TRIANGLE_H