#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "iostream";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    std::cout<<"test";
    std::cout<<"bouse";
}

MainWindow::~MainWindow()
{
    delete ui;
}
