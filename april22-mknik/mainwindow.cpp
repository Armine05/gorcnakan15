#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setMouseTracking(true);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    startPoint = event->pos();
    endPoint = startPoint;
    drawing = true;
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (drawing) {
        endPoint = event->pos();
        update();
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    endPoint = event->pos();
    drawing = false;
    update();
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(Qt::black);

    if (drawing || startPoint != endPoint) {
        QRect rect(startPoint, endPoint);
        painter.drawRect(rect.normalized());
    }
}

MainWindow::~MainWindow()
{

}
