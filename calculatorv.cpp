#include "iostream"
#include "calculatorv.h"


CalculatorV::CalculatorV(int numbers): numbersAmount(numbers) {
    this->numbers = new float[this->numbersAmount + 1];
    this->operationPos = 0;
}

void CalculatorV::resetOperationPos() {
    this->operationPos = 0;
}

CalculatorV::~CalculatorV() {
    delete[] this->numbers;
}

void CalculatorV::prepareResult() {
    this->numbers[this->numbersAmount] = this->numbersAmount ? this->numbers[0] : 0;
}

void CalculatorV::input() {
    this->resetOperationPos();
    this->inputNumbers();
    this->prepareResult();
}

void CalculatorV::inputNumbers() {
    std::cout << "Type numbers for calculation:\n";
    for (int i = 0; i < this->numbersAmount; i++) {
        std::cin >> this->numbers[i];
    }
}

float CalculatorV::calc() {
    if (this->operationPos + 1 >= this->numbersAmount) return this->numbers[this->numbersAmount];

    this->numbers[this->numbersAmount] = this->operate(this->numbers[this->numbersAmount], this->numbers[this->operationPos + 1]);
    this->operationPos++;


    return this->calc();
}
