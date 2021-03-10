#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "Figure.h"

class Triangle : public Figure {
public:
    Triangle(double a, double b, double c);

    double calculateP() const override;

    double calculateS() const override;

protected:
    double _a, _b, _c;
};

#endif // TRIANGLE_H_INCLUDED
