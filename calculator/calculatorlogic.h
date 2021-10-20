#ifndef CALCULATORLOGIC_H
#define CALCULATORLOGIC_H


class CalculatorLogic
{
public:
    CalculatorLogic();

    int add(int num1, int num2);
    float add(float num1, float num2);

    int add(int num1, int num2,int num3);
    float add(float num1, float num2,float num3);

    int subtract(int num1, int num2);
    float subtract(float num1, float num2);

    int subtract(int num1, int num2,int num3);
    float subtract(float num1, float num2,float num3);

    float division(int num1, int num2);

    int multiplication(int num1, int num2);
    float multiplication(float num1, float num2);

    int multiplication(int num1, int num2,int num3);
    float multiplication(float num1, float num2,float num3);
};

#endif // CALCULATORLOGIC_H
