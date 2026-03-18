#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    tableWidget = new QTableWidget(4, 2, this);

        QStringList headers;
        headers << "anun" << "azganu";
        tableWidget->setHorizontalHeaderLabels(headers);

        QTableWidgetItem *item;

        item = new QTableWidgetItem("Alice");
        tableWidget->setItem(0, 0, item);
        item = new QTableWidgetItem("30");
        tableWidget->setItem(0, 1, item);

        item = new QTableWidgetItem("Bob");
        tableWidget->setItem(1, 0, item);
        item = new QTableWidgetItem("25");
        tableWidget->setItem(1, 1, item);

        tableWidget->resizeColumnsToContents();


        QHBoxLayout *layout = new QHBoxLayout(this);
        layout->addWidget(tableWidget);
        setLayout(layout);

}

Widget::~Widget()
{

}
