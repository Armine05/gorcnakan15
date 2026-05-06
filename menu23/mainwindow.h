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
    void GcelLine();
    void GcelTriangle();
    void GcelRectangle();
    void GcelElipse();
    void ClearAll();

    enum ShapeType { None, Line, Triangle,Rectangle,Elipse };
    ShapeType currentShape = None;



};

#endif // MAINWINDOW_H
