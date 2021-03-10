#define _USE_MATH_DEFINES

#include <cmath>

#include "Rectangle.h"

Rectangle::Rectangle(double a, double b) : Parallelogram(a, b, (M_PI / 2)) {
    _name = "Rectangle";
}

