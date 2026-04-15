#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QLabel>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QPen>
#include <QPoint>

class Widget : public QWidget
{
    Q_OBJECT
    QLabel *l1;
    QLabel *l2;
    QLineEdit *e1;
    QLineEdit *e2;
    QVBoxLayout *v1;
    QPushButton *b1;
    QPushButton *b2;
    QPoint point1;
    QPoint point2;












public:
    Widget(QWidget *parent = 0);
    void paintEvent(QPaintEvent *b);
    ~Widget();
public slots:
    void givePoint();
    void giveLine();
};

#endif // WIDGET_H
