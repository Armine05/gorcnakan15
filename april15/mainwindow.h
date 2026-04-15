#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QPen>
#include <QRect>
#include <QPolygon>
#include <QPoint>
#include <QBrush>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *e);
    ~MainWindow();
};

#endif // MAINWINDOW_H
