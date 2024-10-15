#ifndef GRAPHINGCALCULATOR_H
#define GRAPHINGCALCULATOR_H

#include <QWidget>
#include <QHBoxLayout>

class GraphingCalculator : public QWidget {
public:
    GraphingCalculator(QWidget *parent = nullptr);
    
private:
    QWidget *graphingCalculatorTab;
    QHBoxLayout *graphingCalculatorLayout;

    void graphingCalculatorUI();
};
#endif // GRAPHINGCALCULATOR_H

