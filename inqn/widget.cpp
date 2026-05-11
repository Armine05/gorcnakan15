#include "widget.h"
#include "paintframe.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // QVBoxLayout *v1;
    // QHBoxLayout *h1;
    // QHBoxLayout *h2;
    // QHBoxLayout *h3;
    // QLabel *l1;
    // QLabel *l2;
    // QLabel *l3;
    // QLabel *l4;
    // QLineEdit *e1;
    // QLineEdit *e2;
    // QLineEdit *e3;
    // QLineEdit *e4;
    this->resize(600,600);
    this->setWindowTitle("ColorSelect");
    v1= new QVBoxLayout;
    h1 = new QHBoxLayout;
    h2 = new QHBoxLayout;
    h3 = new QHBoxLayout;
    h4 = new QHBoxLayout;
    h5 = new QHBoxLayout;

    this->setLayout(v1);
    v1->addLayout(h1);
    v1->addLayout(h2);
    v1->addLayout(h3);
    v1->addLayout(h4);
    v1->addLayout(h5);

    l1 = new QLabel("x");
    e1 =new QLineEdit;
    h1->addWidget(l1);
    h1->addWidget(e1);

    l2 = new QLabel("y");
    e2 =new QLineEdit;
    h2->addWidget(l2);
    h2->addWidget(e2);

    l3 = new QLabel("weight");
    e3 =new QLineEdit;
    h3->addWidget(l3);
    h3->addWidget(e3);

    l4 = new QLabel("height");
    e4 =new QLineEdit;
    h4->addWidget(l4);
    h4->addWidget(e4);


    b1= new QPushButton("Select color");
    b2 = new QPushButton("Paint");
    h5->addWidget(b1);
    h5->addWidget(b2);

    connect(b1, &QPushButton::clicked, this, [=]()
            {
                c1 = QColorDialog::getColor();
            });



    v1->addStretch();
    frame = new PaintFrame;

    frame->setFrameShape(QFrame::Box);

    frame->setMinimumSize(600,400);

    v1->addWidget(frame);


connect(b2, &QPushButton::clicked, this, [=]()
        {
            frame->x = e1->text().toInt();
            frame->y = e2->text().toInt();
            frame->w = e3->text().toInt();
            frame->h = e4->text().toInt();

            frame->color = c1;

            frame->update();
        });

}

Widget::~Widget() = default;
