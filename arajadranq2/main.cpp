#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QSlider>
#include <QLabel>
#include <QLineEdit>
#include <QLCDNumber>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QWidget *central = new QWidget(&w);
    w.setCentralWidget(central);
    w.resize(400,400);



    QVBoxLayout *v1 = new QVBoxLayout(central);
    QHBoxLayout *h1 = new QHBoxLayout(central);
    QHBoxLayout *h2 = new QHBoxLayout(central);
    QHBoxLayout *h3 = new QHBoxLayout(central);
    QHBoxLayout *h4 = new QHBoxLayout(central);
    v1->addLayout(h1);
    v1->addLayout(h2);
    v1->addLayout(h3);
    v1->addLayout(h4);

    QLabel *name = new QLabel("Full NAME");
    QLineEdit *dasht = new QLineEdit("your name");


    h1->addWidget(name);
    h1->addWidget(dasht);

    QLabel *age1 = new QLabel("AGE");
    QSlider *slide = new QSlider;
    slide->setOrientation(Qt::Horizontal);

    h2->addWidget(age1);
    h2->addWidget(slide);

    QLabel *age2 = new QLabel("AGE");
    QSpinBox *spinbox = new QSpinBox;
    h3->addWidget(age2);
    h3->addWidget(spinbox);

    QLabel *datark = new QLabel;
    QLCDNumber *number = new QLCDNumber;

    h4->addWidget(datark);
    h4->addWidget(number);

    QObject::connect(dasht,SIGNAL(textChanged(QString )),datark,SLOT(setText( QString )));


    QObject::connect(slide,SIGNAL(valueChanged(int)),number,SLOT(display(int)));
    QObject::connect(spinbox,SIGNAL(valueChanged(int)),number,SLOT(display(int)));
    QObject::connect(spinbox,SIGNAL(valueChanged(int)),slide,SLOT(setValue(int)));
    QObject::connect(slide,SIGNAL(valueChanged(int)),spinbox,SLOT(setValue(int)));







    w.show();

    return a.exec();
}
