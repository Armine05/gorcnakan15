#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *b1;
    QLineEdit *e1,*e2;
    QLabel *l1,*l2;
    QVBoxLayout *v1;
    QHBoxLayout *h1,*h2,*h3;
    this->resize(200,200);

   v1= new QVBoxLayout;
   this->setLayout(v1);
   h1= new QHBoxLayout;
   h2= new QHBoxLayout;
   h3= new QHBoxLayout;
   v1->addLayout(h1);
   v1->addLayout(h2);
   v1->addLayout(h3);

   l1=new QLabel("Username");
   h1->addWidget(l1);
   e1= new QLineEdit;

   h1->addWidget(e1);



   l2=new QLabel("Passwrod");
   h2->addWidget(l2);
   e2= new QLineEdit;
   h2->addWidget(e2);
   e2->setEchoMode(QLineEdit::Password);


   b1=new QPushButton("Sign in");
   h3->addWidget(b1);

  connect(b1, &QPushButton::clicked, this, [=]()
            {

    if(e1->text()=="admin" && e2->text()=="qwerty"){
        QMessageBox::information(this, "yoohoo !", "you signed in :)");


    }
    else{
        count++;
        QMessageBox::critical(this, "wrong pwd", "you wrote wrong password :(");
        if(count>2){

            this->close();

        }
    }


           });

}

Widget::~Widget()
{

}

