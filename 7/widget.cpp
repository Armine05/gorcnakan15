#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    button = new QPushButton("clickME");
        label = new QLabel;
        l = new QVBoxLayout;
        s1 = new QSpinBox;
        s2 = new QSpinBox;

        this->setLayout(l);
        l->addWidget(button);
        l->addWidget(label);
        l->addWidget(s1);
        l->addWidget(s2);
        this->resize(400, 300);
        this->move(100, 100);

      connect(button, SIGNAL(clicked(bool)), this, SLOT(calc1()));

}

Widget::~Widget()
{

}
void Widget::calc1(){
    int x = s1->value();
    int y = s2->value();
    int z = x*x+y*y;
     QString str = QString::number(z);
    label->setText(str);
}
