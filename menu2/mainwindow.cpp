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



       QAction *submenuAction = new QAction("Submenu ↓", this);

       file->addAction(newAction);
       file->addAction(openAction);
       file->addSeparator();
       file->addAction(submenuAction);
       file->addAction(exitAction);


 connect(exitAction, &QAction::triggered, this, &QWidget::close);
 connect(green, &QAction::triggered, this, &MainWindow::setGreen);
 connect(red,   &QAction::triggered, this, &MainWindow::setRed);
 connect(blue,  &QAction::triggered, this, &MainWindow::setBlue);




//       QMenu *submenu = new QMenu(this);
//       submenu->addAction("Child 1");
//       submenu->addAction("Child 2");


//       connect(file, &QMenu::hovered, this,
//           [=](QAction *action)
//       {
//           if (action == submenuAction)
//           {
//               QRect rect = file->actionGeometry(action);
//               QPoint pos = file->mapToGlobal(rect.bottomLeft());

//               submenu->popup(pos);
//           }
//       });

//       connect(exitAction, &QAction::triggered, this, &QWidget::close);
 }

void MainWindow::paintEvent(QPaintEvent *)
 {

    QPainter p(this);

    pen.setWidth(5);
    QPoint point1=QPoint(100,50);
    QPoint point2=QPoint(150,100);
    p.drawLine(point1, point2);


}
void MainWindow::setGreen()
{
    pen.setColor(Qt::green);
}

void MainWindow::setRed()
{
     pen.setColor(Qt::red);
}

void MainWindow::setBlue()
{
     pen.setColor(Qt::blue);
}
