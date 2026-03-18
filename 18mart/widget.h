#ifndef WIDGET_H
#define WIDGET_H
#include "widget.h"
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QRadioButton>
#include <QWidget>
#include <QMessageBox>
#include <QTextEdit>
#include <QMessageBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);

    QLabel *l1;
    QLabel *l2;
    QLabel *l3;
    QLabel *l4;
    QLabel *l5;
    QLabel *l6;

    QLineEdit * q1;
    QLineEdit * q2;
    QLineEdit * q3;


    QRadioButton *p1;
    QRadioButton *p2;
    QRadioButton *p3;

    QRadioButton *p4;
    QRadioButton *p5;
    QRadioButton *p6;


    QVBoxLayout *v1;
    QHBoxLayout *h1;
    QHBoxLayout *h2;
    QHBoxLayout *h3;
    QHBoxLayout *h4;
    QHBoxLayout *h5;
    QHBoxLayout *h6;
    QHBoxLayout *h7;

    QPushButton *b1;



    QTextEdit *M;

    ~Widget();

 public slots:
    void validation();

};

#endif // WIDGET_H
