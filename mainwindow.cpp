#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLabel>
#include <QMainWindow>
#include <string>
#include <QPropertyAnimation>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     this->setWindowTitle("Calculator");
}

MainWindow::~MainWindow()
{
    delete ui;
}

int firstNum = 0;  // Initialize to 0
int secondNum = 0; // Initialize to 0
int result = 0;

int Operator = 0;  // Initialize operator to 0 (no operation selected)

void MainWindow::on_pushButton1_clicked()
{
    ui->label->setText(ui->label->text() + "1");
}

void MainWindow::on_pushButton2_clicked()
{
    ui->label->setText(ui->label->text() + "2");
}

void MainWindow::on_pushButton3_clicked()
{
    ui->label->setText(ui->label->text() + "3");
}

void MainWindow::on_pushButton4_clicked()
{
    ui->label->setText(ui->label->text() + "4");
}

void MainWindow::on_pushButton5_clicked()
{
    ui->label->setText(ui->label->text() + "5");
}

void MainWindow::on_pushButton6_clicked()
{
    ui->label->setText(ui->label->text() + "6");
}

void MainWindow::on_pushButton7_clicked()
{
    ui->label->setText(ui->label->text() + "7");
}

void MainWindow::on_pushButton8_clicked()
{
    ui->label->setText(ui->label->text() + "8");
}

void MainWindow::on_pushButton9_clicked()
{
    ui->label->setText(ui->label->text() + "9");
}

void MainWindow::on_pushButton0_clicked()
{
    ui->label->setText(ui->label->text() + "0");
}

void MainWindow::on_pushButtonClear_clicked()
{
    ui->label->setText("");
    firstNum = 0;
    secondNum = 0;
    Operator = 0;
}

void MainWindow::on_PushButtonEqual_clicked()
{
    qDebug() << "Equal button clicked!";

    try {
        // Versuchen, die Eingabe in eine Zahl zu konvertieren
        secondNum = std::stoi(ui->label->text().toStdString());

        // Berechnen des Ergebnisses
        result = CalculateResult(firstNum, secondNum);
        ui->label->setText(QString::fromStdString(std::to_string(result)));
    } catch (const std::invalid_argument& e) {
        // Fehler: Ungültige Eingabe (z.B. Text anstelle einer Zahl)
        ui->label->setText("Error");
        qDebug() << "Invalid input: " << e.what();
    } catch (const std::out_of_range& e) {
        // Fehler: Zahl zu groß oder zu klein für std::stoi
        ui->label->setText("Error");
        qDebug() << "Input out of range: " << e.what();
    }
}


void MainWindow::on_pushButtonAddition_clicked()
{
    try {
        firstNum = std::stoi(ui->label->text().toStdString());
        Operator = 1;  // Set operator to addition
        ui->label->setText("");
    } catch (const std::invalid_argument& e) {
        ui->label->setText("Error");
        qDebug() << "Invalid input: " << e.what();
    } catch (const std::out_of_range& e) {
        ui->label->setText("Error");
        qDebug() << "Input out of range: " << e.what();
    }
}
void MainWindow::on_pushButtonSubtraction_clicked()
{
    firstNum = std::stoi(ui->label->text().toStdString());
    Operator = 2;  // Set operator to subtraction
    ui->label->setText("");
}

void MainWindow::on_pushButtonMultiplication_clicked()
{
    firstNum = std::stoi(ui->label->text().toStdString());
    Operator = 3;  // Set operator to multiplication
    ui->label->setText("");
}

void MainWindow::on_pushButtonDivision_clicked()
{
    qDebug()<< "Division Button clicked";

    try {
        firstNum = std::stoi(ui->label->text().toStdString());
        Operator = 4;  // Set operator to division
        ui->label->setText("");
    } catch (const std::invalid_argument& e) {
        ui->label->setText("Error");
        qDebug() << "Invalid input: " << e.what();
    } catch (const std::out_of_range& e) {
        ui->label->setText("Error");
        qDebug() << "Input out of range: " << e.what();
    }
}

void MainWindow::on_pushedButtonBackspace_clicked()
{
    QString currentText = ui->label->text();
    if (!currentText.isEmpty()) {
        currentText.chop(1);
        ui->label->setText(currentText);
    }
}


int MainWindow::CalculateResult(int firstNum, int secondNum)
{
    switch(Operator) {
    case 1: // Addition
        return firstNum + secondNum;
    case 2: // Subtraction
        return firstNum - secondNum;
    case 3: // Multiplication
        return firstNum * secondNum;
    case 4: // Division
        if (secondNum != 0) {
            return firstNum / secondNum;
        } else {
            return 0;  // Handle division by zero
        }
    default:
        return 0;
    }
}
