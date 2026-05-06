#include "mainwindow.h"
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QColor>
#include <QPainter>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(300,400);
    createMenu();
}

MainWindow::~MainWindow()
{

}
void MainWindow::createMenu(){
    QMenuBar *mBar = this->menuBar();
       QMenu *file = new QMenu("File", this);
       mBar->addMenu(file);


       QAction *newAction = new QAction("New", this);
       QAction *openAction = new QAction("Open", this);
       QAction *exitAction = new QAction("Exit", this);

       QMenu *color = file->addMenu("color");
       QAction *green=new QAction("green",this);
       green->setData(QColor(Qt::green));
       color->addAction(green);

       QAction *red=new QAction("red",this);
       red->setData(QColor(Qt::red));
       color->addAction(red);

       QAction *blue=new QAction("blue",this);
       blue->setData(QColor(Qt::blue));
       color->addAction(blue);



       QMenu *Shape = new QMenu("Shape", this);
       file->addMenu(Shape);
       QAction *line=new QAction("line",this);
       QAction *triangle=new QAction("triangle",this);
       QAction *rectangle= new QAction("rectangle", this);
       QAction *elipse = new QAction("elipse",this);
       Shape->addAction(line);
       Shape->addAction(triangle);
       Shape->addAction(rectangle);
       Shape->addAction(elipse);

       QAction *clearAll = new QAction("clear",this);
       file->addAction(clearAll);

       file->addAction(newAction);
       file->addAction(openAction);
       file->addSeparator();

       file->addAction(exitAction);


 connect(exitAction, &QAction::triggered, this, &QWidget::close);
 connect(green, &QAction::triggered, this, &MainWindow::setGreen);
 connect(red,   &QAction::triggered, this, &MainWindow::setRed);
 connect(blue,  &QAction::triggered, this, &MainWindow::setBlue);

 connect(line,  &QAction::triggered, this, &MainWindow::GcelLine);
 connect(triangle,  &QAction::triggered, this, &MainWindow::GcelTriangle);
 connect(rectangle,  &QAction::triggered, this, &MainWindow::GcelRectangle);
 connect(elipse,  &QAction::triggered, this, &MainWindow::GcelElipse);

 }

void MainWindow::paintEvent(QPaintEvent *)
 {

    QPainter p(this);

    pen.setWidth(5);
    p.setPen(pen);
    QPoint point1=QPoint(100,50);
    QPoint point2=QPoint(150,100);
    QPoint point3 = QPoint(50,50);
    QPoint point4=QPoint(100,100);

    if (currentShape == Line) {
            p.drawLine(point1, point2);
        }
        else if (currentShape == Triangle) {
            QPolygon poly;
            poly << point1 << point2 << point3;
            p.drawPolygon(poly);
        }
    else if (currentShape == Rectangle) {
        QPolygon poly;
        poly << point1 << point2 << point4<<point3;
        p.drawPolygon(poly);
    }
    else if (currentShape == Elipse) {
         p.drawEllipse(point2, 30, 30);
    }



}
void MainWindow::setGreen()
{
    pen.setColor(Qt::green);
    update();
}

void MainWindow::setRed()
{
     pen.setColor(Qt::red);
     update();
}

void MainWindow::setBlue()
{
     pen.setColor(Qt::blue);
     update();
}
void MainWindow::GcelLine()
{
    currentShape = Line;
    update();
}

void MainWindow::GcelTriangle()
{
    currentShape = Triangle;
    update();
}
void MainWindow::GcelRectangle()
{
    currentShape = Rectangle;
    update();
}

void MainWindow::GcelElipse()
{
    currentShape = Elipse;
    update();
}
void MainWindow::ClearAll()
{
    currentShape = None;
    update();
}
