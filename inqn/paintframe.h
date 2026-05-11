#ifndef PAINTFRAME_H
#define PAINTFRAME_H

#include <QFrame>
#include <QPainter>

class PaintFrame : public QFrame
{
    Q_OBJECT

public:
    explicit PaintFrame(QWidget *parent = nullptr);

    int x = 0;
    int y = 0;
    int w = 0;
    int h = 0;

    QColor color;

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif