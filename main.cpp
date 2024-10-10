#include <QApplication>
#include <QLabel>
#include <QMainWindow>

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QMainWindow window;

    window.setFixedSize(1200,700);

    window.show();
    return app.exec();
}