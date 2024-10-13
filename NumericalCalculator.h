#ifndef NUMERICALCALCULATOR_H
#define NUMERICALCALCULATOR_H

#include <QWidget>
#include <QHBoxLayout>

class NumericalCalculator : public QWidget {
    
public:
    NumericalCalculator(QWidget *parent = nullptr);

private:
    QWidget *numericalCalculatorTab;
    QHBoxLayout *numericalCalculatorLayout;

    void numericalCalculatorUI();
};
#endif // NUMERICALCALCULATOR_H