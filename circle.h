//Pavlo Khryshcheniuk

#ifndef RYSOWANIE_CIRCLE_H
#define RYSOWANIE_CIRCLE_H


#include "shape.h"

class Circle : public Shape {
public:
    Circle(Display*, int);
    void draw();

private:
    int r;



};


#endif //RYSOWANIE_CIRCLE_H