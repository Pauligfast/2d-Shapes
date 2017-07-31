//Pavlo Khryshcheniuk

#include "circle.h"

Circle::Circle(Display* w, int r) : Shape(w) {
    this->r = r;
}

void Circle::draw() {
    display->drawCircle(r);
}