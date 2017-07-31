//Pavlo Khryshcheniuk

#include "complexShape.h"

ComplexShape::ComplexShape(Display *w) : Shape(w) {
    this->counter = 0;
}

void ComplexShape::draw() {
    for (int i = 0; i < counter; i++)
        tab[i]->draw();
}

bool ComplexShape::add(Shape *o) {
    if (counter == 5)
        return false;
    else {
        tab[counter] = o;
        counter++;
        return true;
    }
}

