#ifndef WIDGET_H
#define WIDGET_H

#include "paintframe.h"
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpinBox>
#include <QColor>
#include <QPainter>
#include <QColorDialog>
#include <QPushButton>
#include <QPaintEvent>
#include <QFrame>

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget() override;
    QVBoxLayout *v1;
    QHBoxLayout *h1;
    QHBoxLayout *h2;
    QHBoxLayout *h3;
    QHBoxLayout *h4;
    QHBoxLayout *h5;
    QLabel *l1;
    QLabel *l2;
    QLabel *l3;
    QLabel *l4;
    QLineEdit *e1;
    QLineEdit *e2;
    QLineEdit *e3;
    QLineEdit *e4;
    QPushButton *b1,*b2;
    QColor c1;
    PaintFrame *frame;
    // void paintEvent(QPaintEvent *event)override;





};
#endif // WIDGET_H
