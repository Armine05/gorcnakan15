#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    v=new QVBoxLayout;
    v2=new QVBoxLayout;
    h1= new QHBoxLayout;
    h2= new QHBoxLayout;
    h3= new QHBoxLayout;

    l1= new QLabel("Number");
    l2= new QLabel("Power");
    l3= new QLabel("Rezult");
    p1= new QPushButton("Close");
    L=new QLCDNumber;

    n1= new QSpinBox;
     n2= new QSpinBox;
     n1->setMaximum(10);
     n2->setRange(0, 10);

    this->setLayout(v);
    this->resize(300,200);
    this->setWindowTitle("Power");
    this->setStyleSheet("background-color:yellow");

    v->addLayout(h1);
    v->addLayout(h2);
    v->addLayout(h3);

    h1->addWidget(l1);
    h1->addWidget(n1);

    h2->addWidget(l2);
    h1->addWidget(n2);

    h3->addWidget(l3);
  //  h3->addStretch();


    v2->addWidget(L);
    v2->addWidget(p1);

    h3->addLayout(v2);

   connect(p1, SIGNAL(clicked()), this, SLOT(close()));
}

Widget::~Widget()
{

}
