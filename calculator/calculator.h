#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class calculator; }
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:
    void on_btnNum1_clicked();

    void on_btnNum2_clicked();

    void on_btnNum3_clicked();

    void on_btnNum4_clicked();

    void on_btnNum5_clicked();

    void on_btnNum6_clicked();

    void on_btnNum7_clicked();

    void on_btnNum8_clicked();

    void on_btnNum9_clicked();

    void on_btnNum0_clicked();

    void on_btnEqual_clicked();

    void on_btnAdd_clicked();

    void on_btnSubtract_clicked();

    void on_btnClear_clicked();

private:
    Ui::calculator *ui;
};
#endif // CALCULATOR_H
