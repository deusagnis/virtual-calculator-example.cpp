#include "iostream"
#include "calculatorfabric.h"

#include "calculatorv.h"
#include "adder.h"
#include "subtractor.h"
#include "multiplier.h"
#include "divider.h"

void CalculatorFabric::start() {
    while(this->notExitInput()){
        this->inputOperator();
        if (this->operatorDoesntExist()){
            continue;
        }
        this->inputNumbersAmount();
        this->make();
        this->provideCalculation();
    }
}

bool CalculatorFabric::notExitInput() {
    return this->calculationOperator != 'x';
}

void CalculatorFabric::inputOperator() {
    std::cout << "Type operator (+, -, *, / or x for exit): ";
    std::cin >> this->calculationOperator;
}

void CalculatorFabric::inputNumbersAmount() {
    std::cout << "Type numbers amount: ";
    std::cin >> this->numbersAmount;
}

bool CalculatorFabric::operatorDoesntExist() {
    return (this->calculationOperator != '+'
            &&  this->calculationOperator != '-'
            &&  this->calculationOperator != '*'
            &&  this->calculationOperator != '/'
    );
}

void CalculatorFabric::make(){
    switch (this->calculationOperator) {
    case '+':
        this->calculator = std::make_unique<Adder>(this->numbersAmount);
        break;
    case '-':
        this->calculator = std::make_unique<Subtractor>(this->numbersAmount);
        break;
    case '*':
        this->calculator = std::make_unique<Multiplier>(this->numbersAmount);
        break;
    case '/':
        this->calculator = std::make_unique<Divider>(this->numbersAmount);
        break;
    }
}

void CalculatorFabric::provideCalculation() {
    this->calculator->input();
    std::cout << "Result: " << this->calculator->calc() << std::endl << std::endl;
}
