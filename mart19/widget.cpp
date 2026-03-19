#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    l1 = new QLabel ("Fisrt name");
    l2 = new QLabel ("Second name");
    e1 = new QLineEdit;
    e2 = new QLineEdit;



    v1 = new QVBoxLayout;
    h1 = new QHBoxLayout;
    h2 = new QHBoxLayout;
    h3 = new QHBoxLayout;
    h4 = new QHBoxLayout;
    h5 = new QHBoxLayout;
    h6 = new QHBoxLayout;
    h7 = new QHBoxLayout;

    combo = new QComboBox;
    l3 = new QLabel("fakultet");

    l4 = new QLabel ("@ntrel ser@");
    r1 = new QRadioButton("male");
    r2 = new QRadioButton ("female");

    h3->addWidget(l4);
    h3->addWidget(r1);
    h3->addWidget(r2);


    combo->addItem("ikm");
    combo->addItem("banaser");
    combo->addItem("tntes");



    b1 = new QPushButton("Submit");

    bar1 = new QStatusBar();
    bar1->showMessage(tr("Application started. Ready."), 3000);

    h1->addWidget(l1);
    h1->addWidget(e1);
    h2->addWidget(l2);
    h2->addWidget(e2);
    h4->addWidget(l3);
    h4->addWidget(combo);

    h5->addWidget(b1);
    h6->addWidget(bar1);



    this->setLayout(v1);
    v1->addLayout(h1);
    v1->addLayout(h2);
    v1->addLayout(h3);
    v1->addLayout(h4);
    v1->addLayout(h5);
    v1->addLayout(h6);
    this->resize(400,400);

    connect(b1, SIGNAL(clicked()), this, SLOT(PrintStatus()));

    tableWidget = new QTableWidget(0,4, this);
    QStringList headers;
    headers<<"First name"<<"Second name"<<"ser"<<"fakultet";
    tableWidget->setHorizontalHeaderLabels(headers);
    h7->addWidget(tableWidget);
    v1->addLayout(h7);

    connect(b1, SIGNAL(clicked()), this, SLOT(addResult()));


}

void Widget::PrintStatus(){
QString message;
message+=e1->text()+" ";
message+=e2->text()+" ";
if(r1->isChecked()){
    message+="male ";
}
if(r2->isChecked()){
    message+="female ";
}
message+=combo->currentText();
bar1->showMessage(message);



}
void Widget::addResult(){
   QTableWidgetItem *item;
   int x = tableWidget->rowCount();
   tableWidget->setRowCount(x+1);

   QString save = e1->text();
   item = new QTableWidgetItem(save);
   tableWidget->setItem(x,0,item);

   save = e2->text();
   item = new QTableWidgetItem(save);
   tableWidget->setItem(x,1,item);

   if(r1->isChecked()){
       save="male ";
       item = new QTableWidgetItem(save);
       tableWidget->setItem(x,1,item);
   }
   if(r2->isChecked()){
       save="female ";
       item = new QTableWidgetItem(save);
       tableWidget->setItem(x,2,item);
   }

   save = combo->currentText();
   item = new QTableWidgetItem(save);
   tableWidget->setItem(x,3,item);




}

Widget::~Widget()
{

}
