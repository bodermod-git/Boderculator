#include "GraphingCalculator.h"

GraphingCalculator::GraphingCalculator(QWidget *parent) : QWidget(parent) {
    graphingCalculatorUI();
}

void GraphingCalculator::graphingCalculatorUI() {
    graphingCalculatorTab = new QWidget(this);
    graphingCalculatorLayout = new QHBoxLayout(graphingCalculatorTab);

    graphingCalculatorTab->setLayout(graphingCalculatorLayout);
}