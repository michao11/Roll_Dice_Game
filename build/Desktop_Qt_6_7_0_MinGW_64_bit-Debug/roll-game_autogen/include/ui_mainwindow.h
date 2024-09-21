/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *result_label;
    QLabel *label2;
    QLabel *first_number_label;
    QPushButton *roll_pushButton;
    QLabel *fourth_number_label;
    QLabel *final_score_label;
    QLabel *third_number_label;
    QLabel *label3;
    QLabel *second_number_label;
    QLabel *label4;
    QLabel *number_of_games_label;
    QPushButton *accept_pushButton;
    QLineEdit *amount_lineEdit;
    QLabel *label1;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:  rgb(27, 27, 27);\n"
"color: white;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        result_label = new QLabel(centralwidget);
        result_label->setObjectName("result_label");
        result_label->setGeometry(QRect(370, 270, 41, 31));
        result_label->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        result_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label2 = new QLabel(centralwidget);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(310, 270, 51, 31));
        label2->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        label2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        first_number_label = new QLabel(centralwidget);
        first_number_label->setObjectName("first_number_label");
        first_number_label->setGeometry(QRect(180, 200, 61, 51));
        first_number_label->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        first_number_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        roll_pushButton = new QPushButton(centralwidget);
        roll_pushButton->setObjectName("roll_pushButton");
        roll_pushButton->setGeometry(QRect(310, 150, 111, 32));
        roll_pushButton->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        fourth_number_label = new QLabel(centralwidget);
        fourth_number_label->setObjectName("fourth_number_label");
        fourth_number_label->setGeometry(QRect(470, 200, 61, 51));
        fourth_number_label->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        fourth_number_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        final_score_label = new QLabel(centralwidget);
        final_score_label->setObjectName("final_score_label");
        final_score_label->setGeometry(QRect(380, 320, 41, 31));
        final_score_label->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        final_score_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        third_number_label = new QLabel(centralwidget);
        third_number_label->setObjectName("third_number_label");
        third_number_label->setGeometry(QRect(380, 200, 61, 51));
        third_number_label->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        third_number_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label3 = new QLabel(centralwidget);
        label3->setObjectName("label3");
        label3->setGeometry(QRect(290, 320, 81, 31));
        label3->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        label3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        second_number_label = new QLabel(centralwidget);
        second_number_label->setObjectName("second_number_label");
        second_number_label->setGeometry(QRect(280, 200, 61, 51));
        second_number_label->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        second_number_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label4 = new QLabel(centralwidget);
        label4->setObjectName("label4");
        label4->setGeometry(QRect(280, 100, 121, 31));
        label4->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        label4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        number_of_games_label = new QLabel(centralwidget);
        number_of_games_label->setObjectName("number_of_games_label");
        number_of_games_label->setGeometry(QRect(410, 100, 41, 31));
        number_of_games_label->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        number_of_games_label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        accept_pushButton = new QPushButton(centralwidget);
        accept_pushButton->setObjectName("accept_pushButton");
        accept_pushButton->setGeometry(QRect(430, 50, 91, 31));
        accept_pushButton->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        amount_lineEdit = new QLineEdit(centralwidget);
        amount_lineEdit->setObjectName("amount_lineEdit");
        amount_lineEdit->setGeometry(QRect(300, 50, 121, 31));
        label1 = new QLabel(centralwidget);
        label1->setObjectName("label1");
        label1->setGeometry(QRect(230, 50, 61, 31));
        label1->setStyleSheet(QString::fromUtf8("border: 2px solid white;"));
        label1->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
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
        result_label->setText(QString());
        label2->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
        first_number_label->setText(QString());
        roll_pushButton->setText(QCoreApplication::translate("MainWindow", "ROLL", nullptr));
        fourth_number_label->setText(QString());
        final_score_label->setText(QString());
        third_number_label->setText(QString());
        label3->setText(QCoreApplication::translate("MainWindow", "Final Score:", nullptr));
        second_number_label->setText(QString());
        label4->setText(QCoreApplication::translate("MainWindow", "Number of games:", nullptr));
        number_of_games_label->setText(QString());
        accept_pushButton->setText(QCoreApplication::translate("MainWindow", "ACCEPT", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "Amount:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
