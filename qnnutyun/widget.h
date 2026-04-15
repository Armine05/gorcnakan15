#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLCDNumber>
#include <QSpinBox>
//#include <cmath>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    QVBoxLayout *v;
    QHBoxLayout *h1;
    QHBoxLayout *h2;
    QHBoxLayout *h3;

    QLabel*l1;
    QLabel*l2;
    QLabel*l3;
    QVBoxLayout *v2;

    QSpinBox*n1;

    QSpinBox*n2;

    QLCDNumber*L;
    QPushButton*p1;



    ~Widget();
public slots:
    void calc1();
};

#endif // WIDGET_H
