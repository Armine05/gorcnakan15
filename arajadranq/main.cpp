#include "mainwindow.h"
#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QRadioButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QWidget *central = new QWidget(&w);
    QVBoxLayout *layout = new QVBoxLayout(central);

    QLineEdit *harc = new QLineEdit("Are you a student?");
    QRadioButton *yes = new QRadioButton("Yes");
    QRadioButton *no = new QRadioButton("No");
    QPushButton *btn = new QPushButton("Submit");

    layout->addWidget(harc);
    layout->addWidget(yes);
    layout->addWidget(no);
    layout->addWidget(btn);

    w.setCentralWidget(central);

    w.show();
    return a.exec();
}
