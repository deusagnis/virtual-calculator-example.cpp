#ifndef DIVIDER_H
#define DIVIDER_H

#include "calculatorv.h"

class Divider: public CalculatorV
{
public:
    Divider(int);
protected:
    float operate(float, float);
};

#endif // DIVIDER_H
