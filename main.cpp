#include <iostream>
#include <memory>

#include "calculatorfabric.h"


using namespace std;

int main()
{
    std::unique_ptr<CalculatorFabric> fabric(new CalculatorFabric());

    fabric->start();

    return 0;
}
