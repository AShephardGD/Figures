#ifndef PARALLELOGRAM_H_INCLUDED
#define PARALLELOGRAM_H_INCLUDED

#include "figure.h"

class Parallelogram : public Figure {
public:
    Parallelogram(double a, double b, double angle);

    double calculateP() const override;
    double calculateS() const override;

protected:
    double _a, _b, _angle;
};

#endif // PARALLELOGRAM_H_INCLUDED
