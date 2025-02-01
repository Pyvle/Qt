/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_expr;
    QLabel *label_result;
    QGridLayout *gridLayout;
    QPushButton *pushButton_sub;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_eq;
    QPushButton *pushButton_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_1;
    QPushButton *pushButton_6;
    QPushButton *pushButton_0;
    QPushButton *pushButton_mult;
    QPushButton *pushButton_7;
    QPushButton *pushButton_com;
    QPushButton *pushButton_8;
    QPushButton *pushButton_add;
    QPushButton *pushButton_4;
    QPushButton *pushButton_C;
    QPushButton *pushButton_rev;
    QPushButton *pushButton_perc;
    QPushButton *pushButton_div;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(722, 548);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(250, 120, 342, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_expr = new QLabel(verticalLayoutWidget);
        label_expr->setObjectName("label_expr");
        QFont font;
        font.setKerning(true);
        label_expr->setFont(font);

        verticalLayout->addWidget(label_expr);

        label_result = new QLabel(verticalLayoutWidget);
        label_result->setObjectName("label_result");

        verticalLayout->addWidget(label_result);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_sub = new QPushButton(verticalLayoutWidget);
        pushButton_sub->setObjectName("pushButton_sub");

        gridLayout->addWidget(pushButton_sub, 2, 3, 1, 1);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 3, 2, 1, 1);

        pushButton_eq = new QPushButton(verticalLayoutWidget);
        pushButton_eq->setObjectName("pushButton_eq");

        gridLayout->addWidget(pushButton_eq, 4, 3, 1, 1);

        pushButton_9 = new QPushButton(verticalLayoutWidget);
        pushButton_9->setObjectName("pushButton_9");

        gridLayout->addWidget(pushButton_9, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton_1 = new QPushButton(verticalLayoutWidget);
        pushButton_1->setObjectName("pushButton_1");

        gridLayout->addWidget(pushButton_1, 3, 0, 1, 1);

        pushButton_6 = new QPushButton(verticalLayoutWidget);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout->addWidget(pushButton_6, 2, 2, 1, 1);

        pushButton_0 = new QPushButton(verticalLayoutWidget);
        pushButton_0->setObjectName("pushButton_0");

        gridLayout->addWidget(pushButton_0, 4, 0, 1, 2);

        pushButton_mult = new QPushButton(verticalLayoutWidget);
        pushButton_mult->setObjectName("pushButton_mult");

        gridLayout->addWidget(pushButton_mult, 1, 3, 1, 1);

        pushButton_7 = new QPushButton(verticalLayoutWidget);
        pushButton_7->setObjectName("pushButton_7");

        gridLayout->addWidget(pushButton_7, 1, 0, 1, 1);

        pushButton_com = new QPushButton(verticalLayoutWidget);
        pushButton_com->setObjectName("pushButton_com");

        gridLayout->addWidget(pushButton_com, 4, 2, 1, 1);

        pushButton_8 = new QPushButton(verticalLayoutWidget);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout->addWidget(pushButton_8, 1, 1, 1, 1);

        pushButton_add = new QPushButton(verticalLayoutWidget);
        pushButton_add->setObjectName("pushButton_add");

        gridLayout->addWidget(pushButton_add, 3, 3, 1, 1);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 2, 0, 1, 1);

        pushButton_C = new QPushButton(verticalLayoutWidget);
        pushButton_C->setObjectName("pushButton_C");

        gridLayout->addWidget(pushButton_C, 0, 0, 1, 1);

        pushButton_rev = new QPushButton(verticalLayoutWidget);
        pushButton_rev->setObjectName("pushButton_rev");

        gridLayout->addWidget(pushButton_rev, 0, 1, 1, 1);

        pushButton_perc = new QPushButton(verticalLayoutWidget);
        pushButton_perc->setObjectName("pushButton_perc");

        gridLayout->addWidget(pushButton_perc, 0, 2, 1, 1);

        pushButton_div = new QPushButton(verticalLayoutWidget);
        pushButton_div->setObjectName("pushButton_div");

        gridLayout->addWidget(pushButton_div, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 722, 21));
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
        label_expr->setText(QString());
        label_result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_sub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_mult->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_com->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_rev->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_perc->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
