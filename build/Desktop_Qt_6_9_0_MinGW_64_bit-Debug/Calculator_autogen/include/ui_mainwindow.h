/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonBackspace;
    QPushButton *pushButtonAddition;
    QPushButton *pushButton9;
    QPushButton *pushButton7;
    QPushButton *pushButton8;
    QPushButton *pushButtonDivision;
    QPushButton *pushButton6;
    QPushButton *pushButton4;
    QPushButton *pushButton5;
    QPushButton *pushButtonSubtraction;
    QPushButton *pushButton3;
    QPushButton *pushButton1;
    QPushButton *pushButton2;
    QPushButton *pushButtonMultiplication;
    QPushButton *pushButton0;
    QPushButton *pushButtonClear;
    QPushButton *PushButtonEqual;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(415, 660);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButtonBackspace = new QPushButton(centralwidget);
        pushButtonBackspace->setObjectName("pushButtonBackspace");
        pushButtonBackspace->setGeometry(QRect(210, 170, 91, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(24);
        pushButtonBackspace->setFont(font);
        pushButtonAddition = new QPushButton(centralwidget);
        pushButtonAddition->setObjectName("pushButtonAddition");
        pushButtonAddition->setGeometry(QRect(300, 170, 91, 81));
        pushButtonAddition->setFont(font);
        pushButton9 = new QPushButton(centralwidget);
        pushButton9->setObjectName("pushButton9");
        pushButton9->setGeometry(QRect(210, 260, 91, 81));
        pushButton9->setFont(font);
        pushButton7 = new QPushButton(centralwidget);
        pushButton7->setObjectName("pushButton7");
        pushButton7->setGeometry(QRect(30, 260, 91, 81));
        pushButton7->setFont(font);
        pushButton8 = new QPushButton(centralwidget);
        pushButton8->setObjectName("pushButton8");
        pushButton8->setGeometry(QRect(120, 260, 91, 81));
        pushButton8->setFont(font);
        pushButtonDivision = new QPushButton(centralwidget);
        pushButtonDivision->setObjectName("pushButtonDivision");
        pushButtonDivision->setGeometry(QRect(300, 260, 91, 81));
        pushButtonDivision->setFont(font);
        pushButton6 = new QPushButton(centralwidget);
        pushButton6->setObjectName("pushButton6");
        pushButton6->setGeometry(QRect(210, 350, 91, 81));
        pushButton6->setFont(font);
        pushButton4 = new QPushButton(centralwidget);
        pushButton4->setObjectName("pushButton4");
        pushButton4->setGeometry(QRect(30, 350, 91, 81));
        pushButton4->setFont(font);
        pushButton5 = new QPushButton(centralwidget);
        pushButton5->setObjectName("pushButton5");
        pushButton5->setGeometry(QRect(120, 350, 91, 81));
        pushButton5->setFont(font);
        pushButtonSubtraction = new QPushButton(centralwidget);
        pushButtonSubtraction->setObjectName("pushButtonSubtraction");
        pushButtonSubtraction->setGeometry(QRect(300, 350, 91, 81));
        pushButtonSubtraction->setFont(font);
        pushButton3 = new QPushButton(centralwidget);
        pushButton3->setObjectName("pushButton3");
        pushButton3->setGeometry(QRect(210, 450, 91, 81));
        pushButton3->setFont(font);
        pushButton1 = new QPushButton(centralwidget);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setGeometry(QRect(30, 450, 91, 81));
        pushButton1->setFont(font);
        pushButton2 = new QPushButton(centralwidget);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setGeometry(QRect(120, 450, 91, 81));
        pushButton2->setFont(font);
        pushButtonMultiplication = new QPushButton(centralwidget);
        pushButtonMultiplication->setObjectName("pushButtonMultiplication");
        pushButtonMultiplication->setGeometry(QRect(300, 450, 91, 81));
        pushButtonMultiplication->setFont(font);
        pushButton0 = new QPushButton(centralwidget);
        pushButton0->setObjectName("pushButton0");
        pushButton0->setGeometry(QRect(30, 540, 271, 81));
        pushButton0->setFont(font);
        pushButtonClear = new QPushButton(centralwidget);
        pushButtonClear->setObjectName("pushButtonClear");
        pushButtonClear->setGeometry(QRect(30, 170, 171, 81));
        pushButtonClear->setFont(font);
        PushButtonEqual = new QPushButton(centralwidget);
        PushButtonEqual->setObjectName("PushButtonEqual");
        PushButtonEqual->setGeometry(QRect(300, 540, 91, 81));
        PushButtonEqual->setFont(font);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 331, 121));
        label->setFont(font);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButtonBackspace->setText(QCoreApplication::translate("MainWindow", "<=", nullptr));
        pushButtonAddition->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButtonDivision->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButtonSubtraction->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButtonMultiplication->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        PushButtonEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
