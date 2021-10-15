#include "calculatorlogic.h"

CalculatorLogic::CalculatorLogic()
{

}

int CalculatorLogic::add (int num1, int num2) {
    return num1 + num2;
}

int CalculatorLogic::subtract (int num1, int num2) {
    return num1 - num2;
}

float CalculatorLogic::division (int num1, int num2) {
    return float(num1) / float(num2);
}

int CalculatorLogic::multiplication (int num1, int num2) {
    return num1 * num2;
}
