//Pavlo Khryshcheniuk

#ifndef RYSOWANIE_COMPLEXSHAPE_H
#define RYSOWANIE_COMPLEXSHAPE_H


#include "shape.h"

class ComplexShape : public Shape {
public:
    void draw();
    ComplexShape(Display *);

    bool add(Shape *);


private:

    int counter;
    Shape *tab[5];
};


#endif //RYSOWANIE_COMPLEXSHAPE_H