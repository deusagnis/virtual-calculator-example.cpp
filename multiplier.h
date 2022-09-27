#ifndef MULTIPLIER_H
#define MULTIPLIER_H

#include "calculatorv.h"

class Multiplier: public CalculatorV
{
public:
    Multiplier(int);
protected:
    float operate(float, float);
};

#endif // MULTIPLIER_H
