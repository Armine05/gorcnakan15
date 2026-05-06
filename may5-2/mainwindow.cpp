#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(200,200);
    CreateMenu();
    s1 = new QSpinBox;
    QWidget *central = new QWidget(this);
       this->setCentralWidget(central);

       QVBoxLayout *v1 = new QVBoxLayout;
       central->setLayout(v1);

    QHBoxLayout *h1 = new QHBoxLayout;
    QLabel *l1 = new QLabel("First number");
    h1->addWidget(l1);

    h1->addWidget(s1);

    QHBoxLayout *h2 = new QHBoxLayout;
    QLabel *l2 = new QLabel("Second number");
    s2= new QSpinBox;
    h2->addWidget(l2);
    h2->addWidget(s2);

    QHBoxLayout *h3 = new QHBoxLayout;
    l3 = new QLabel("Result");
    h3->addWidget(l3);


    v1->addLayout(h1);
    v1->addLayout(h2);
    v1->addLayout(h3);


}
void MainWindow::CreateMenu(){
    QMenuBar *mbar= this->menuBar();
    QMenu *choose= new QMenu("choose", this);
    mbar->addMenu(choose);
    QAction *bazm= new QAction(" * bazmapatkum", this);
    QAction *gumarum= new QAction(" + gumarum", this);
    QAction *bajanum= new QAction(" / bajanum", this);
    QAction *hanum= new QAction(" - hanum", this);
     choose->addAction(bazm);
     choose->addAction(gumarum);
     choose->addAction(hanum);
     choose->addAction(bajanum);

     connect(bazm, &QAction::triggered, this, &MainWindow::bazmapatkum);
     connect(gumarum, &QAction::triggered, this, &MainWindow::gumarum);
     connect(hanum, &QAction::triggered, this, &MainWindow::hanum);
     connect(bajanum, &QAction::triggered, this, &MainWindow::bajanum);

}
void MainWindow::gumarum(){
     x = s1->value();
     y = s2->value();
     z = x+y;
     QString str = QString::number(z);
     l3->setText(str);

}
void MainWindow::hanum(){
     x = s1->value();
     y = s2->value();
     z = x-y;
     QString str = QString::number(z);
     l3->setText(str);

}
void MainWindow::bazmapatkum(){
     x = s1->value();
     y = s2->value();
     z = x*y;
     QString str = QString::number(z);
     l3->setText(str);

}
void MainWindow::bajanum(){
     x = s1->value();
     y = s2->value();
     if(y!=0){
         z = x%y;
         QString str = QString::number(z);
         l3->setText(str);
     }
     else{
         l3->setText("chi kareli");
         QMessageBox::critical(this, "Error Title", "chi kareli :(");
         l3->setStyleSheet("color:red");
     }


}
MainWindow::~MainWindow()
{

}
