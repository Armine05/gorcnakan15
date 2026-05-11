
#include "paintframe.h"

PaintFrame::PaintFrame(QWidget *parent)
    : QFrame(parent)
{
    setFrameShape(QFrame::Box);
}

void PaintFrame::paintEvent(QPaintEvent *event)
{
    QFrame::paintEvent(event);

    QPainter p(this);

    p.setBrush(QBrush(color, Qt::DiagCrossPattern));

    p.drawRect(x, y, w, h);
}