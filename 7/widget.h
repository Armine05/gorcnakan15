#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QSpinBox>
#include <QVBoxLayout>
#include <QString>


class Widget : public QWidget
{
    Q_OBJECT

public:

    QLabel *label;
    QPushButton *button;
    QSpinBox *s1;
    QSpinBox *s2;

    QVBoxLayout *l;


    Widget(QWidget *parent = 0);
    ~Widget();

public slots:
void calc1();


};




#endif // WIDGET_H
