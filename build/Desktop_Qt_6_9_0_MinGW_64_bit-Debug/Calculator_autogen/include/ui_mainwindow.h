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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton4;
    QPushButton *pushButton7;
    QPushButton *pushButton3;
    QPushButton *pushButton9;
    QPushButton *pushButton8;
    QPushButton *pushButton2;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton1;
    QPushButton *pushButtonMultiplication;
    QPushButton *pushButtonSubtraction;
    QPushButton *pushButtonDivision;
    QPushButton *pushButtonBackspace;
    QPushButton *pushButtonClear;
    QPushButton *pushButtonAddition;
    QPushButton *PushButtonEqual;
    QPushButton *pushButton0;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(396, 565);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"    background-color: #f9f9f9;\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #2f3542;\n"
"    font-size: 24px;\n"
"    font-weight: 600;\n"
"}\n"
"\n"
"QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 12px 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 361, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Sans Serif Collection")});
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("/* Label-Stil im MacOS-Stil */\n"
"QLabel {\n"
"    background-color: #f1f2f6; /* Helles Grau, passend zu den Buttons */\n"
"    color: #2f3542; /* Dunkles Grau f\303\274r den Text */\n"
"    border: none;\n"
"    border-radius: 25px; /* Abgerundete Ecken wie bei den Buttons */\n"
"    font-size: 30px; /* Gr\303\266\303\237ere Schrift f\303\274r bessere Lesbarkeit */\n"
"    font-weight: bold; /* Fett f\303\274r eine bessere visuelle Betonung */\n"
"    padding: 15px; /* Etwas mehr Abstand im Label */\n"
"    text-align: right; /* Textausrichtung nach rechts, wie bei Taschenrechnern */\n"
"}\n"
"\n"
"/* Optional: Hover-Effekt f\303\274r das Label, falls gew\303\274nscht */\n"
"QLabel:hover {\n"
"    background-color: #dfe4ea; /* Helleres Grau bei Hover */\n"
"}\n"
"\n"
"/* Optional: Focus-Effekt f\303\274r das Label, falls gew\303\274nscht */\n"
"QLabel:focus {\n"
"    border: 2px solid #ff6f61; /* Orange-Rote Umrandung bei Fokus */\n"
"}\n"
""));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 130, 361, 431));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton4 = new QPushButton(gridLayoutWidget);
        pushButton4->setObjectName("pushButton4");
        pushButton4->setFont(font);
        pushButton4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton4, 3, 0, 1, 1);

        pushButton7 = new QPushButton(gridLayoutWidget);
        pushButton7->setObjectName("pushButton7");
        pushButton7->setFont(font);
        pushButton7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton7, 2, 0, 1, 1);

        pushButton3 = new QPushButton(gridLayoutWidget);
        pushButton3->setObjectName("pushButton3");
        pushButton3->setFont(font);
        pushButton3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton3, 4, 2, 1, 1);

        pushButton9 = new QPushButton(gridLayoutWidget);
        pushButton9->setObjectName("pushButton9");
        pushButton9->setFont(font);
        pushButton9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton9, 2, 2, 1, 1);

        pushButton8 = new QPushButton(gridLayoutWidget);
        pushButton8->setObjectName("pushButton8");
        pushButton8->setFont(font);
        pushButton8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton8, 2, 1, 1, 1);

        pushButton2 = new QPushButton(gridLayoutWidget);
        pushButton2->setObjectName("pushButton2");
        pushButton2->setFont(font);
        pushButton2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton2, 4, 1, 1, 1);

        pushButton5 = new QPushButton(gridLayoutWidget);
        pushButton5->setObjectName("pushButton5");
        pushButton5->setFont(font);
        pushButton5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton5, 3, 1, 1, 1);

        pushButton6 = new QPushButton(gridLayoutWidget);
        pushButton6->setObjectName("pushButton6");
        pushButton6->setFont(font);
        pushButton6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton6, 3, 2, 1, 1);

        pushButton1 = new QPushButton(gridLayoutWidget);
        pushButton1->setObjectName("pushButton1");
        pushButton1->setFont(font);
        pushButton1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton1, 4, 0, 1, 1);

        pushButtonMultiplication = new QPushButton(gridLayoutWidget);
        pushButtonMultiplication->setObjectName("pushButtonMultiplication");
        pushButtonMultiplication->setFont(font);
        pushButtonMultiplication->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButtonMultiplication, 4, 3, 1, 1);

        pushButtonSubtraction = new QPushButton(gridLayoutWidget);
        pushButtonSubtraction->setObjectName("pushButtonSubtraction");
        pushButtonSubtraction->setFont(font);
        pushButtonSubtraction->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButtonSubtraction, 3, 3, 1, 1);

        pushButtonDivision = new QPushButton(gridLayoutWidget);
        pushButtonDivision->setObjectName("pushButtonDivision");
        pushButtonDivision->setFont(font);
        pushButtonDivision->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButtonDivision->setMouseTracking(true);
        pushButtonDivision->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButtonDivision, 2, 3, 1, 1);

        pushButtonBackspace = new QPushButton(gridLayoutWidget);
        pushButtonBackspace->setObjectName("pushButtonBackspace");
        pushButtonBackspace->setFont(font);
        pushButtonBackspace->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButtonBackspace, 1, 2, 1, 1);

        pushButtonClear = new QPushButton(gridLayoutWidget);
        pushButtonClear->setObjectName("pushButtonClear");
        pushButtonClear->setFont(font);
        pushButtonClear->setStyleSheet(QString::fromUtf8("/* Allgemeiner Stil f\303\274r alle Buttons */\n"
"QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"/* Hover-Effekt f\303\274r alle Buttons */\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"/* Pressed-Effekt f\303\274r alle Buttons */\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
"\n"
"/* Spezieller Stil f\303\274r den Clear-Button */\n"
"QPushButton#pushButtonClear {\n"
"    background-color: #ff7f50; /* Helles Orange */\n"
"    color: #fff;\n"
"}\n"
"\n"
"/* Hover-Effekt f\303\274r den Clear-Button */\n"
"QPushButton#pushButtonClear:hover {\n"
"    background-color: #ff6347; /* Dunkleres Orange bei Hover */\n"
"}\n"
"\n"
"/* Pressed-Effekt f\303\274r den Clear-Button */\n"
"QPushButton#pushButtonClear:pressed {\n"
"    background-color: #e55347; /* Noch dunkleres Orange bei gedr\303\274ckt */\n"
""
                        "}\n"
""));

        gridLayout->addWidget(pushButtonClear, 1, 0, 1, 2);

        pushButtonAddition = new QPushButton(gridLayoutWidget);
        pushButtonAddition->setObjectName("pushButtonAddition");
        pushButtonAddition->setFont(font);
        pushButtonAddition->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButtonAddition, 1, 3, 1, 1);

        PushButtonEqual = new QPushButton(gridLayoutWidget);
        PushButtonEqual->setObjectName("PushButtonEqual");
        PushButtonEqual->setFont(font);
        PushButtonEqual->setStyleSheet(QString::fromUtf8("/* Allgemeiner Stil f\303\274r alle Buttons */\n"
"QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"/* Hover-Effekt f\303\274r alle Buttons */\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"/* Pressed-Effekt f\303\274r alle Buttons */\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
"\n"
"/* Spezieller Stil f\303\274r den Equal-Button (Orange) */\n"
"QPushButton#PushButtonEqual {\n"
"    background-color: #ff6f61; /* Orange-Rot */\n"
"    color: #fff;\n"
"}\n"
"\n"
"/* Hover-Effekt f\303\274r den Equal-Button */\n"
"QPushButton#PushButtonEqual:hover {\n"
"    background-color: #ff8f7f; /* Helleres Orange-Rot bei Hover */\n"
"}\n"
"\n"
"/* Pressed-Effekt f\303\274r den Equal-Button */\n"
"QPushButton#PushButtonEqual:pressed {\n"
"    background-color: #ffb3a7; /* Noch helleres Orange-Rot bei gedr\303\274"
                        "ckt */\n"
"}\n"
""));

        gridLayout->addWidget(PushButtonEqual, 5, 3, 1, 1);

        pushButton0 = new QPushButton(gridLayoutWidget);
        pushButton0->setObjectName("pushButton0");
        pushButton0->setFont(font);
        pushButton0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #f1f2f6;\n"
"    color: #2f3542;\n"
"    border: none;\n"
"    border-radius: 25px;\n"
"    font-size: 20px;\n"
"    font-weight: bold;\n"
"    padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #dfe4ea;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #ced6e0;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton0, 5, 0, 1, 3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        pushButton4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButtonMultiplication->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButtonSubtraction->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButtonDivision->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButtonBackspace->setText(QCoreApplication::translate("MainWindow", "<=", nullptr));
        pushButtonClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButtonAddition->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        PushButtonEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
