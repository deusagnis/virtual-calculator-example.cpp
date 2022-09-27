#ifndef SUBTRACTOR_H
#define SUBTRACTOR_H

#include "calculatorv.h"

class Subtractor: public CalculatorV
{
public:
    Subtractor(int);
protected:
    float operate(float, float);
};

#endif // SUBTRACTOR_H
