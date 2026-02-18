#include "widget.h"
#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.resize(400, 400);

    // ===== 1. Фоновый QLabel =====
    QLabel *bg = new QLabel(&w);
    bg->setPixmap(QPixmap("C:/Users/User/Desktop/istockphoto-825383494-612x612.jpg").scaled(
        w.size(), Qt::IgnoreAspectRatio, Qt::SmoothTransformation));
    bg->setGeometry(0, 0, w.width(), w.height());
    bg->lower(); // отправляем на задний план

    // ===== 2. Виджеты формы =====
    QLabel *l1 = new QLabel("Name");
    QLabel *l2 = new QLabel("Surname");
    QLabel *l3 = new QLabel("Age");

    QLineEdit *name = new QLineEdit;
    QLineEdit *surname = new QLineEdit;
    QLineEdit *age = new QLineEdit;

    QPushButton *b = new QPushButton("Send");
    b->setStyleSheet("background-color:green; border-width:2px; border-radius:10px; border-color:white; color:white;");

    // ===== 3. Layouts =====
    QHBoxLayout *h1 = new QHBoxLayout;
    QHBoxLayout *h2 = new QHBoxLayout;
    QHBoxLayout *h3 = new QHBoxLayout;
    QHBoxLayout *h4 = new QHBoxLayout;
    QVBoxLayout *v  = new QVBoxLayout;

    h1->addWidget(l1);
    h1->addWidget(name);

    h2->addWidget(l2);
    h2->addWidget(surname);

    h3->addWidget(l3);
    h3->addWidget(age);

    h4->addWidget(b);

    v->addLayout(h1);
    v->addLayout(h2);
    v->addLayout(h3);
    v->addLayout(h4);

    // ===== 4. Прозрачные поля (чтобы фон просвечивал) =====
    name->setStyleSheet("background: transparent;");
    surname->setStyleSheet("background: transparent;");
    age->setStyleSheet("background: transparent;");

    l1->setStyleSheet("color: purple;");
    l2->setStyleSheet("color: purple;");
    l3->setStyleSheet("color: purple;");

    w.setLayout(v);

    w.show();
    return a.exec();
}
