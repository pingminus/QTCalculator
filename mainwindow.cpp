#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QMainWindow>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int firstNum;
int secondNum;








void MainWindow::on_pushButton1_clicked()
{
    ui->label->setText(ui->label->text() + "1");
}

void MainWindow::on_pushButton2_clicked()
{

}



