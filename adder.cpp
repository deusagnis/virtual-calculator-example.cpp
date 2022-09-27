#include "adder.h"

Adder::Adder(int amount): CalculatorV(amount) {}

float Adder::operate(float a, float b) {
    return a + b;
}
