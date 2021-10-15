#include "calculator.h"
#include "ui_calculator.h"
#include "calculatorlogic.h"

#include <string>
using namespace std;

string num1 = "";
string num2 = "";
string operation = "";

QString mx = "<font color=%1>%2</font>";
string color = "#FFFFFF";

CalculatorLogic cl;

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}


void calculator::on_btnNum1_clicked()
{
    if (operation == ""){
        num1.append("1");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num1.c_str()));
    }else {
        num2.append("1");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num2.c_str()));
    }
}


void calculator::on_btnNum2_clicked()
{
    if (operation == ""){
        num1.append("2");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num1.c_str()));
    }else {
        num2.append("2");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num2.c_str()));
    }
}


void calculator::on_btnNum3_clicked()
{
    if (operation == ""){
        num1.append("3");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num1.c_str()));
    }else {
        num2.append("3");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num2.c_str()));
    }
}


void calculator::on_btnNum4_clicked()
{
    if (operation == ""){
        num1.append("4");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num1.c_str()));
    }else {
        num2.append("4");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num2.c_str()));
    }
}


void calculator::on_btnNum5_clicked()
{
    if (operation == ""){
        num1.append("5");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num1.c_str()));
    }else {
        num2.append("5");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num2.c_str()));
    }
}


void calculator::on_btnNum6_clicked()
{
    if (operation == ""){
        num1.append("6");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num1.c_str()));
    }else {
        num2.append("6");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num2.c_str()));
    }
}


void calculator::on_btnNum7_clicked()
{
    if (operation == ""){
        num1.append("7");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num1.c_str()));
    }else {
        num2.append("7");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num2.c_str()));
    }
}


void calculator::on_btnNum8_clicked()
{
    if (operation == ""){
        num1.append("8");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num1.c_str()));
    }else {
        num2.append("8");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num2.c_str()));
    }
}

void calculator::on_btnNum9_clicked()
{
    if (operation == ""){
        num1.append("9");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num1.c_str()));
    }else {
        num2.append("9");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num2.c_str()));
    }
}

void calculator::on_btnNum0_clicked()
{
    if (operation == ""){
        num1.append("0");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num1.c_str()));
    }else {
        num2.append("0");
        ui->lblDisplay->setText(mx.arg(color.c_str(), num2.c_str()));
    }
}


void calculator::on_btnEqual_clicked()
{
    string answer = "";

    if (operation == "+"){
        answer = to_string(cl.add(stoi(num1), stoi(num2)));
    }else if (operation == "-") {
        answer = to_string(cl.subtract(stoi(num1), stoi(num2)));
    }else if (operation == "÷") {
        answer = to_string(cl.division(stoi(num1), stoi(num2)));
    }else if (operation == "X") {
        answer = to_string(cl.multiplication(stoi(num1), stoi(num2)));
    }

    ui->lblDisplay->setText(mx.arg(color.c_str(), answer.c_str()));

    num1 = "";
    num2 = "";
    operation = "";

}


void calculator::on_btnAdd_clicked()
{
    operation = "+";
    ui->lblDisplay->setText(mx.arg(color.c_str(), operation.c_str()));
}


void calculator::on_btnSubtract_clicked()
{
    operation = "-";
    ui->lblDisplay->setText(mx.arg(color.c_str(), operation.c_str()));
}


void calculator::on_btnClear_clicked()
{
    num1 = "";
    num2 = "";
    operation = "";
}


void calculator::on_btnDivition_clicked()
{
    operation = "÷";
    ui->lblDisplay->setText(mx.arg(color.c_str(), operation.c_str()));
}


void calculator::on_btnMultiplication_clicked()
{
    operation = "X";
    ui->lblDisplay->setText(mx.arg(color.c_str(), operation.c_str()));
}

