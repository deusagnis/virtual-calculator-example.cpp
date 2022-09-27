#include "divider.h"
#include "math.h"

Divider::Divider(int amount): CalculatorV(amount) {}

float Divider::operate(float a, float b) {
    if (b == 0) return NAN;
    return a / b;
}
