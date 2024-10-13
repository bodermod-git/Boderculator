#include "NumericalCalculator.h"

NumericalCalculator::NumericalCalculator(QWidget *parent) : QWidget(parent) {
    numericalCalculatorUI();
}

void NumericalCalculator::numericalCalculatorUI() {
    numericalCalculatorTab = new QWidget(this);
    numericalCalculatorLayout = new QHBoxLayout(numericalCalculatorTab);

    numericalCalculatorTab->setLayout(numericalCalculatorLayout);

}



