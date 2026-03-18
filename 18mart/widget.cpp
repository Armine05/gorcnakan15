#include "widget.h"



Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    l1 = new QLabel("colour");
    l2 = new QLabel("size");
    l3 = new QLabel ("Description");
    l4 = new QLabel ("name of the product");
    l5 = new QLabel ("cost price");
    l6 = new QLabel ("selling price");

    p1 = new QRadioButton("red");
    p2 = new QRadioButton("black");
    p3 = new QRadioButton("yellow");

   p4 = new QRadioButton("S");
    p5 = new QRadioButton("M");
    p6 = new QRadioButton("L");

    M= new QTextEdit;

    q1 = new QLineEdit;
    q2 = new QLineEdit;
    q3 = new QLineEdit;

    b1 = new QPushButton("Submit");


    v1 = new QVBoxLayout;
    this->setLayout(v1);
    h1 = new QHBoxLayout;
    h1->addWidget(l1);
    h1->addWidget(p1);
    h1->addWidget(p2);
    h1->addWidget(p3);

    h2 = new QHBoxLayout;
    h2->addWidget(l2);
    h2->addWidget(p4);
    h2->addWidget(p5);
    h2->addWidget(p6);

    h3 = new QHBoxLayout;
    h3->addWidget(l3);
    h3->addWidget(M);


    h4 = new QHBoxLayout;
    h4->addWidget(l4);
    h4->addWidget(q1);

    h5 = new QHBoxLayout;
    h5->addWidget(l5);
    h5->addWidget(q2);



    h6 = new QHBoxLayout;
    h6->addWidget(l6);
    h6->addWidget(q3);

    h7 = new QHBoxLayout;
    h7->addWidget(b1);

    v1->addLayout(h1);
    v1->addLayout(h2);
    v1->addLayout(h3);
    v1->addLayout(h4);
    v1->addLayout(h5);
    v1->addLayout(h6);
    v1->addLayout(h7);

    connect(b1, SIGNAL(clicked()), this, SLOT(validation()));




}

Widget::~Widget()
{

}

void Widget::validation(){
    if (q1->text().isEmpty()) {
            QMessageBox::warning(this, "Error", "Product name is required!");
            return;
        }


        if (q2->text().isEmpty()) {
            QMessageBox::warning(this, "Error", "Cost price is required!");
            return;
        }


        if (q3->text().isEmpty()) {
            QMessageBox::warning(this, "Error", "Selling price is required!");
            return;
        }


        if (M->toPlainText().isEmpty()) {
            QMessageBox::warning(this, "Error", "Description is required!");
            return;
        }

        if (!p1->isChecked() && !p2->isChecked() && !p3->isChecked()) {
            QMessageBox::warning(this, "Error", "Please select a colour!");
            return;
        }


        if (!p4->isChecked() && !p5->isChecked() && !p6->isChecked()) {
            QMessageBox::warning(this, "Error", "Please select a size!");
            return;
        }

        QMessageBox::information(this, "Success", "All inputs are valid!");

}
