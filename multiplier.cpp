#include "multiplier.h"

Multiplier::Multiplier(int amount): CalculatorV(amount) {}

float Multiplier::operate(float a, float b) {
    return a * b;
}
