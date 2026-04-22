#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QPen>
#include <QPolygon>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *e);
    QPolygon paintSquare(int a, int b);
    ~MainWindow();
};

#endif // MAINWINDOW_H
