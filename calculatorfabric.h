#ifndef CALCULATORFABRIC_H
#define CALCULATORFABRIC_H

#include "memory"
#include "calculatorv.h"

class CalculatorFabric
{
public:
    void start();
protected:
    int numbersAmount;
    char calculationOperator;
    std::unique_ptr<CalculatorV> calculator;

    void inputOperator();
    void inputNumbersAmount();
    bool operatorDoesntExist();
    bool notExitInput();
    void make();
    void provideCalculation();
};

#endif // CALCULATORFABRIC_H
