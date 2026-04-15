#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    l1= new QLabel ("write cordianntes of x");
    l2= new QLabel ("write cordianntes of y");
    v1= new QVBoxLayout;
    e1 = new QLineEdit;
    e2 = new QLineEdit;
    b1 = new QPushButton("point");
    b2 = new QPushButton("line");

    this->setLayout(v1);


    v1->addWidget(l1);
    v1->addWidget(e1);
    v1->addWidget(l2);
    v1->addWidget(e2);

    v1->addWidget(b1);
    v1->addWidget(b2);

//    QPainter p(this);
//    QPen pen;
//    pen.setWidth(5);
//    pen.setColor(Qt::green);
//    p.setPen(pen);
//    QPoint(120, 200);
    connect(b1,SIGNAL(clicked(bool)),this, SLOT(givePoint()));
    connect(b2,SIGNAL(clicked(bool)),this, SLOT(givePoint()));




}
void Widget::paintEvent(QPaintEvent *) {
    QPainter p(this);
    QPen pen;
    pen.setWidth(5);
    pen.setColor(Qt::green);
    p.setPen(pen);

    p.drawPoint(point1);
    p.drawLine(point1, point2);

}
void  Widget::givePoint(){
    int x = e1->text().toInt();
    int y = e2->text().toInt();
    point1=QPoint(x,y);
    update();

}

void  Widget::giveLine(){
    int x1 = e1->text().toInt();
    int y1 = e2->text().toInt();
    int x2 = x1+20;
    int y2 = y1;
    point1=QPoint(x1,y1);
    point2=QPoint(x2,y2);
    update();

}

Widget::~Widget()
{

}
