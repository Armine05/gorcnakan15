#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QSpinBox>
#include <QMenuBar>
#include <QAction>
#include <QMenu>
#include <QMessageBox>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    void CreateMenu();
    void gumarum();
    void hanum();
    void bajanum();
    void bazmapatkum();
    QSpinBox *s1;
    QSpinBox *s2;
    int x,y,z;
    QLabel *l3;
    ~MainWindow();
};

#endif // MAINWINDOW_H
