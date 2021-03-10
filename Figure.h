#ifndef FIGURE_H_INCLUDED
#define FIGURE_H_INCLUDED

#include <string>

class Figure {
public:
    Figure() = default;
    virtual ~Figure() = default;

    virtual double calculateS() const = 0;
    virtual double calculateP() const = 0;

    std::string getName() const;

protected:
    std::string _name;
};

#endif // FIGURE_H_INCLUDED
