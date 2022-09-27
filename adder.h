#ifndef ADDER_H
#define ADDER_H

#include "calculatorv.h"

class Adder: public CalculatorV
{
public:
    Adder(int);
protected:
    float operate(float, float);
};

#endif // ADDER_H
