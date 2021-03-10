#include <cmath>

#include "RightTriangle.h"

RTriangle::RTriangle(double a, double b) : Triangle(a, b, std::sqrt(a*a + b*b)) {
    _name = "Right Triangle";
}
