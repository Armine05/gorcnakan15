#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    this->resize(700,700);

}
 void MainWindow::paintEvent(QPaintEvent *)
 {
         QPainter p(this);
         QPen pen,pen2,pen3;
         pen.setWidth(5);
         pen.setColor(Qt::green);
         pen.setStyle(Qt::DashDotDotLine);

         pen2.setWidth(5);
         pen2.setColor(Qt::red);


         pen3.setWidth(5);
         pen3.setColor(Qt::black);

         p.setPen(pen);


         QPolygon triangle;
         triangle<< QPoint(200, 100) << QPoint(120, 200)  << QPoint(280, 200);
         p.drawPolygon(triangle);


         p.setPen(pen2);

         QPolygon R;
         R<< QPoint(120, 200) << QPoint(280, 200) << QPoint(280,350)<< QPoint(120, 350);

         p.drawPolygon(R);



         QBrush b1;
         b1.setColor(Qt::black);
         p.setPen(pen3);
         QPolygon R2;

         R2<< QPoint(320, 200) << QPoint(480, 200) << QPoint(480,500)<< QPoint(320, 500);
         p.setBrush(b1);
         p.drawPolygon(R2);


 }


MainWindow::~MainWindow()
{

}

