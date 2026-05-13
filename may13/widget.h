#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QMessageBox>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    QPushButton *b1;
    QLineEdit *e1,*e2;
    QLabel *l1,*l2;

    int count=0;

    QVBoxLayout *v1;
    QHBoxLayout *h1,*h2,*h3;

    ~Widget();
};

#endif // WIDGET_H
