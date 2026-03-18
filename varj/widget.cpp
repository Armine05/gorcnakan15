#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    l1 = new QLabel ("number1");
    l2 = new QLabel ("number2");
    l3 = new QLabel ("number2");
    e1 = new QLineEdit;
    e2 = new QLineEdit;
    e3 = new QLineEdit;
    b1= new QPushButton ("change_colour");

    v1 = new QVBoxLayout;
    this->setLayout(v1);
    v1->addWidget(l1);
    v1->addWidget(e1);
    v1->addWidget(l2);
    v1->addWidget(e2);
    v1->addWidget(l3);
    v1->addWidget(e3);
    v1->addWidget(b1);


    connect(b1, SIGNAL(clicked()), this, SLOT(changeColour()));



}

Widget::~Widget()
{

}
 void Widget::changeColour(){
     int a,b,c;
     a = e1->text().toInt();
     b = e2->text().toInt();
     c = e3->text().toInt();
     this->setStyleSheet(
             QString("background-color: rgb(%1, %2, %3);")
             .arg(a)
             .arg(b)
             .arg(c)
         );

 }
