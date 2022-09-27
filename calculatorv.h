#ifndef CALCULATORV_H
#define CALCULATORV_H


class CalculatorV
{
public:
    CalculatorV(int);
    ~CalculatorV();

    virtual void input();
    virtual float calc();
protected:
    int numbersAmount;
    float* numbers;
    int operationPos;

    virtual float operate(float, float) = 0;
    virtual void resetOperationPos();
    virtual void inputNumbers();
    virtual void prepareResult();
};

#endif // CALCULATORV_H
