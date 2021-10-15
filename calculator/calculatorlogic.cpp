#include "calculatorlogic.h"
#include <iostream>

CalculatorLogic::CalculatorLogic()
{

}

int CalculatorLogic::add (int num1, int num2) {
    return num1 + num2;
}

float CalculatorLogic::add (float num1, float num2) {
    return num1 + num2;
}

float CalculatorLogic::subtract (float num1, float num2) {
    return num1 - num2;
}

int CalculatorLogic::subtract (int num1, int num2) {
    return num1 - num2;
}

float CalculatorLogic::division (int num1, int num2) {

    float result;
    try {
         result  = num1/num2;

    }  catch (std::exception e) {
        result = 0;
    }

    return result;
}

int CalculatorLogic::multiplication (int num1, int num2) {
    return num1 * num2;
}
