#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton0_clicked();
    void on_pushButton1_clicked();
    void on_pushButton2_clicked();
    void on_pushButton3_clicked();
    void on_pushButton4_clicked();
    void on_pushButton5_clicked();
    void on_pushButton6_clicked();
    void on_pushButton7_clicked();
    void on_pushButton8_clicked();
    void on_pushButton9_clicked();

    void on_pushButtonClear_clicked();
    void on_PushButtonEqual_clicked();
    void on_pushButtonAddition_clicked();
    void on_pushButtonSubtraction_clicked();
    void on_pushButtonMultiplication_clicked();
    void on_pushButtonDivision_clicked();
    void on_pushedButtonBackspace_clicked();

    int CalculateResult(int firstNum, int secondNum);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
