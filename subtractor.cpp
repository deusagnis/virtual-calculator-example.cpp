#include "subtractor.h"

Subtractor::Subtractor(int amount): CalculatorV(amount) {}

float Subtractor::operate(float a, float b) {
    return a - b;
}
