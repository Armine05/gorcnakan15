#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
     this->resize(700,700);
}

MainWindow::~MainWindow()
{

}
 QPolygon MainWindow:: paintSquare(int a, int b ){

     QPolygon square;
     square<<QPoint(a,b) << QPoint(a, b+10)  << QPoint(a+10, b+10)<<QPoint(a+10, b);
     return square;

 }

void MainWindow::paintEvent(QPaintEvent *)
 {

    QPainter p(this);
    QPen pen,pen2,pen3;
    pen.setWidth(5);
    pen.setColor(Qt::green);


//    pen2.setWidth(5);
//    pen2.setColor(Qt::red);


//    pen3.setWidth(5);
//    pen3.setColor(Qt::black);

    p.setPen(pen);


     QPolygon square;
//    square<<QPoint(0, 0) << QPoint(0, 10)  << QPoint(10, 10)<<QPoint(10, 0);

    int a=0, b=0;
    for (int i=0; i<8; i++){
         a = 0;
        for (int j=0;j<8;j++){


            if ((i + j) % 2 == 0)
                p.setBrush(Qt::white);
            else
                p.setBrush(Qt::black);

//            p.drawRect(a,b,50,50);
            QPolygon square = paintSquare(a, b);
            p.drawPolygon(square);
            a += 10;


//            p.fillRect(square, Qt:black);


        }
        b=b+10;

    }



}
