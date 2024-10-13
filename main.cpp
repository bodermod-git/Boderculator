#include <QApplication>
#include <QLabel>
#include <QMainWindow>
#include <QPushButton>
#include <QTabWidget>
#include <QHBoxLayout>

#include <NumericalCalculator.h>
#include <GraphingCalculator.h>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QMainWindow window;
    QTabWidget *tabWidget = new QTabWidget;

    // Numerical calculator tab
    NumericalCalculator *numericalCalculator = new NumericalCalculator(&window);
    tabWidget->addTab(numericalCalculator, "Numerical Calculator");
    
    // Graphing calculator tab
    GraphingCalculator *graphingCalculator = new GraphingCalculator(&window);
    tabWidget->addTab(graphingCalculator, "Graphing Calculator");

    window.setCentralWidget(tabWidget);
    window.setFixedSize(1200, 700);

    window.show();
    return app.exec();
}