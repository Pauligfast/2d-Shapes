//Pavlo Khryshcheniuk

#include "shape.h"

Shape::Shape() {
}

void Shape::changeDisplay(Display* newDisplay) {
    this->display = newDisplay;
}

Shape::Shape(Display* w) {
    this->display = w;
}

