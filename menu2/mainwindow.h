#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPoint>
#include <QPen>
#include <QPainter>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

    ~MainWindow();
    QPen pen;
    void paintEvent(QPaintEvent *e);
    void createMenu();
    void setGreen();
    void setRed();
    void setBlue();

};

#endif // MAINWINDOW_H
