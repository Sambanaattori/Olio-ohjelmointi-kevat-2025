/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QGridLayout *gridLayout_7;
    QPushButton *divide;
    QPushButton *NumeroNappi6;
    QPushButton *clear;
    QPushButton *plus;
    QPushButton *enter;
    QTextBrowser *inputNum2;
    QPushButton *minus;
    QPushButton *times;
    QPushButton *NumeroNappi8;
    QHBoxLayout *horizontalLayout_3;
    QTextBrowser *inputNum1;
    QPushButton *NumeroNappi5;
    QPushButton *NumeroNappi3;
    QPushButton *NumeroNappi9;
    QTextBrowser *result;
    QPushButton *NumeroNappi2;
    QPushButton *numeroNappi0;
    QPushButton *NumeroNappi7;
    QPushButton *NumeroNappi4;
    QPushButton *NumeroNappi1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1472, 981);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName("gridLayout_7");
        gridLayout_7->setContentsMargins(0, -1, -1, -1);
        divide = new QPushButton(centralwidget);
        divide->setObjectName("divide");

        gridLayout_7->addWidget(divide, 5, 4, 1, 1);

        NumeroNappi6 = new QPushButton(centralwidget);
        NumeroNappi6->setObjectName("NumeroNappi6");

        gridLayout_7->addWidget(NumeroNappi6, 3, 3, 1, 1);

        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");

        gridLayout_7->addWidget(clear, 5, 2, 1, 1);

        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");

        gridLayout_7->addWidget(plus, 2, 4, 1, 1);

        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");

        gridLayout_7->addWidget(enter, 5, 3, 1, 1);

        inputNum2 = new QTextBrowser(centralwidget);
        inputNum2->setObjectName("inputNum2");

        gridLayout_7->addWidget(inputNum2, 1, 2, 1, 1);

        minus = new QPushButton(centralwidget);
        minus->setObjectName("minus");

        gridLayout_7->addWidget(minus, 3, 4, 1, 1);

        times = new QPushButton(centralwidget);
        times->setObjectName("times");

        gridLayout_7->addWidget(times, 4, 4, 1, 1);

        NumeroNappi8 = new QPushButton(centralwidget);
        NumeroNappi8->setObjectName("NumeroNappi8");

        gridLayout_7->addWidget(NumeroNappi8, 4, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        inputNum1 = new QTextBrowser(centralwidget);
        inputNum1->setObjectName("inputNum1");

        horizontalLayout_3->addWidget(inputNum1);


        gridLayout_7->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        NumeroNappi5 = new QPushButton(centralwidget);
        NumeroNappi5->setObjectName("NumeroNappi5");

        gridLayout_7->addWidget(NumeroNappi5, 3, 2, 1, 1);

        NumeroNappi3 = new QPushButton(centralwidget);
        NumeroNappi3->setObjectName("NumeroNappi3");

        gridLayout_7->addWidget(NumeroNappi3, 2, 3, 1, 1);

        NumeroNappi9 = new QPushButton(centralwidget);
        NumeroNappi9->setObjectName("NumeroNappi9");

        gridLayout_7->addWidget(NumeroNappi9, 4, 3, 1, 1);

        result = new QTextBrowser(centralwidget);
        result->setObjectName("result");

        gridLayout_7->addWidget(result, 1, 3, 1, 1);

        NumeroNappi2 = new QPushButton(centralwidget);
        NumeroNappi2->setObjectName("NumeroNappi2");

        gridLayout_7->addWidget(NumeroNappi2, 2, 2, 1, 1);

        numeroNappi0 = new QPushButton(centralwidget);
        numeroNappi0->setObjectName("numeroNappi0");

        gridLayout_7->addWidget(numeroNappi0, 5, 0, 1, 1);

        NumeroNappi7 = new QPushButton(centralwidget);
        NumeroNappi7->setObjectName("NumeroNappi7");

        gridLayout_7->addWidget(NumeroNappi7, 4, 0, 1, 1);

        NumeroNappi4 = new QPushButton(centralwidget);
        NumeroNappi4->setObjectName("NumeroNappi4");

        gridLayout_7->addWidget(NumeroNappi4, 3, 0, 1, 1);

        NumeroNappi1 = new QPushButton(centralwidget);
        NumeroNappi1->setObjectName("NumeroNappi1");

        gridLayout_7->addWidget(NumeroNappi1, 2, 0, 1, 1);


        formLayout->setLayout(0, QFormLayout::LabelRole, gridLayout_7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1472, 29));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        NumeroNappi6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        inputNum2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10.5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Number 2</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        times->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        NumeroNappi8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        inputNum1->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10.5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Number 1</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        NumeroNappi5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        NumeroNappi3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        NumeroNappi9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        result->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:10.5pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Result</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        NumeroNappi2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        numeroNappi0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        NumeroNappi7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        NumeroNappi4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        NumeroNappi1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
