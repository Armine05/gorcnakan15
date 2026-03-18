#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    QLineEdit *e1;
    QLineEdit *e2;
     QLineEdit *e3;
    QPushButton *b1;
    QLabel *l1;
    QLabel *l2;
     QLabel *l3;

    QVBoxLayout *v1;

    ~Widget();


public slots:
    void changeColour();





};


#endif // WIDGET_H
