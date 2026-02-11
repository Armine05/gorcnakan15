#include "widget.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    QHBoxLayout h1,h2,h3;
    QVBoxLayout v;
    QLabel l1,l2,l3;
    l1.setText("Name");
    l2.setText("Surname");
    l3.setText("Age");
    QLineEdit name,surname,age;

    h1.addWidget(&l1);
    h1.addWidget(&name);
    h2.addWidget(&l2);
    h2.addWidget(&surname);
    h3.addWidget(&l3);
    h3.addWidget(&age);

    v.addLayout(&h1);
    v.addLayout(&h2);
    v.addLayout(&h3);

    w.setLayout(&v);
    w.resize(400,400);
    w.show();

    return a.exec();
}
