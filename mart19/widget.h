#ifndef WIDGET_H
#define WIDGET_H


#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QRadioButton>
#include <QStatusBar>
#include <QPushButton>
#include <QComboBox>
#include <QString>
#include <QTableWidget>
#include <QTableWidgetItem>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    QVBoxLayout *v1;
    QHBoxLayout  *h1;
    QHBoxLayout  *h2;
    QHBoxLayout  *h3;
    QHBoxLayout  *h4;
    QHBoxLayout  *h5;
    QHBoxLayout *h6;
    QHBoxLayout *h7;

    QLineEdit *e1;

    QLineEdit *e2;
    QComboBox *combo;
    QPushButton *b1;




    QLabel *l1;
    QLabel *l2;
    QLabel *l3;
    QLabel *l4;

    QRadioButton *r1;
    QRadioButton *r2;

    QStatusBar *bar1;
    QTableWidget *tableWidget ;


    ~Widget();

   public slots:
    void PrintStatus();
    void addResult();
};

#endif // WIDGET_H
