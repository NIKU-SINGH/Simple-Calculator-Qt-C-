/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
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
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPushButton *pushButton_Cancel;
    QPushButton *pushButton_plus_minus;
    QPushButton *pushButton_percentage;
    QPushButton *pushButton_add;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_subtract;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_decimal;
    QPushButton *pushButton_0;
    QPushButton *pushButton_equal;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(272, 394);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 271, 391));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setSizeIncrement(QSize(241, 61));
        QFont font;
        font.setPointSize(19);
        font.setBold(false);
        font.setUnderline(false);
        font.setKerning(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"background-color : white;"));

        gridLayout->addWidget(label, 0, 0, 1, 4);

        pushButton_Cancel = new QPushButton(widget);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_Cancel->sizePolicy().hasHeightForWidth());
        pushButton_Cancel->setSizePolicy(sizePolicy);
        pushButton_Cancel->setSizeIncrement(QSize(61, 61));
        QFont font1;
        font1.setPointSize(10);
        pushButton_Cancel->setFont(font1);
        pushButton_Cancel->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 214, 110);\n"
"  border: 1px solid gray;\n"
" border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_Cancel, 1, 0, 1, 1);

        pushButton_plus_minus = new QPushButton(widget);
        pushButton_plus_minus->setObjectName(QString::fromUtf8("pushButton_plus_minus"));
        sizePolicy.setHeightForWidth(pushButton_plus_minus->sizePolicy().hasHeightForWidth());
        pushButton_plus_minus->setSizePolicy(sizePolicy);
        pushButton_plus_minus->setSizeIncrement(QSize(61, 61));
        pushButton_plus_minus->setFont(font1);
        pushButton_plus_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 214, 110);\n"
"  border: 1px solid gray;\n"
" border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_plus_minus, 1, 1, 1, 1);

        pushButton_percentage = new QPushButton(widget);
        pushButton_percentage->setObjectName(QString::fromUtf8("pushButton_percentage"));
        sizePolicy.setHeightForWidth(pushButton_percentage->sizePolicy().hasHeightForWidth());
        pushButton_percentage->setSizePolicy(sizePolicy);
        pushButton_percentage->setSizeIncrement(QSize(61, 61));
        pushButton_percentage->setFont(font1);
        pushButton_percentage->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 214, 110);\n"
"  border: 1px solid gray;\n"
" border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_percentage, 1, 2, 1, 1);

        pushButton_add = new QPushButton(widget);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));
        sizePolicy.setHeightForWidth(pushButton_add->sizePolicy().hasHeightForWidth());
        pushButton_add->setSizePolicy(sizePolicy);
        pushButton_add->setSizeIncrement(QSize(61, 61));
        pushButton_add->setFont(font1);
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #00BFFF;\n"
"  border: 1px solid gray;\n"
" border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_add, 1, 3, 1, 1);

        pushButton_1 = new QPushButton(widget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setSizeIncrement(QSize(61, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft JhengHei UI")});
        font2.setPointSize(10);
        font2.setBold(true);
        pushButton_1->setFont(font2);
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #FDF6F0;\n"
"  border: 1px solid gray;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_1, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setSizeIncrement(QSize(61, 61));
        pushButton_2->setFont(font2);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #FDF6F0;\n"
"  border: 1px solid gray;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setSizeIncrement(QSize(61, 61));
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #FDF6F0;\n"
"  border: 1px solid gray;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        pushButton_multiply = new QPushButton(widget);
        pushButton_multiply->setObjectName(QString::fromUtf8("pushButton_multiply"));
        sizePolicy.setHeightForWidth(pushButton_multiply->sizePolicy().hasHeightForWidth());
        pushButton_multiply->setSizePolicy(sizePolicy);
        pushButton_multiply->setSizeIncrement(QSize(61, 61));
        pushButton_multiply->setFont(font1);
        pushButton_multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #00BFFF;\n"
"  border: 1px solid gray;\n"
" border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_multiply, 2, 3, 1, 1);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setSizeIncrement(QSize(61, 61));
        pushButton_4->setFont(font2);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #FDF6F0;\n"
"  border: 1px solid gray;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setSizeIncrement(QSize(61, 61));
        pushButton_5->setFont(font2);
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #FDF6F0;\n"
"  border: 1px solid gray;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setSizeIncrement(QSize(61, 61));
        pushButton_6->setFont(font2);
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #FDF6F0;\n"
"  border: 1px solid gray;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_6, 3, 2, 1, 1);

        pushButton_subtract = new QPushButton(widget);
        pushButton_subtract->setObjectName(QString::fromUtf8("pushButton_subtract"));
        sizePolicy.setHeightForWidth(pushButton_subtract->sizePolicy().hasHeightForWidth());
        pushButton_subtract->setSizePolicy(sizePolicy);
        pushButton_subtract->setSizeIncrement(QSize(61, 61));
        pushButton_subtract->setFont(font1);
        pushButton_subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #00BFFF;\n"
"  border: 1px solid gray;\n"
" border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_subtract, 3, 3, 1, 1);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setSizeIncrement(QSize(61, 61));
        pushButton_7->setFont(font2);
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #FDF6F0;\n"
"  border: 1px solid gray;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_7, 4, 0, 1, 1);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setSizeIncrement(QSize(61, 61));
        pushButton_8->setFont(font2);
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #FDF6F0;\n"
"  border: 1px solid gray;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_8, 4, 1, 1, 1);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setSizeIncrement(QSize(61, 61));
        pushButton_9->setFont(font2);
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #FDF6F0;\n"
"  border: 1px solid gray;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_9, 4, 2, 1, 1);

        pushButton_divide = new QPushButton(widget);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));
        sizePolicy.setHeightForWidth(pushButton_divide->sizePolicy().hasHeightForWidth());
        pushButton_divide->setSizePolicy(sizePolicy);
        pushButton_divide->setSizeIncrement(QSize(61, 61));
        pushButton_divide->setFont(font1);
        pushButton_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #00BFFF;\n"
"  border: 1px solid gray;\n"
" border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_divide, 4, 3, 1, 1);

        pushButton_decimal = new QPushButton(widget);
        pushButton_decimal->setObjectName(QString::fromUtf8("pushButton_decimal"));
        sizePolicy.setHeightForWidth(pushButton_decimal->sizePolicy().hasHeightForWidth());
        pushButton_decimal->setSizePolicy(sizePolicy);
        pushButton_decimal->setSizeIncrement(QSize(61, 61));
        pushButton_decimal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #FDF6F0;\n"
"  border: 1px solid gray;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_decimal, 5, 0, 1, 1);

        pushButton_0 = new QPushButton(widget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setSizeIncrement(QSize(61, 61));
        pushButton_0->setFont(font2);
        pushButton_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #FDF6F0;\n"
"  border: 1px solid gray;\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_0, 5, 1, 1, 2);

        pushButton_equal = new QPushButton(widget);
        pushButton_equal->setObjectName(QString::fromUtf8("pushButton_equal"));
        sizePolicy.setHeightForWidth(pushButton_equal->sizePolicy().hasHeightForWidth());
        pushButton_equal->setSizePolicy(sizePolicy);
        pushButton_equal->setSizeIncrement(QSize(61, 61));
        pushButton_equal->setFont(font1);
        pushButton_equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: #00BFFF;\n"
"  border: 1px solid gray;\n"
" border-radius:5px;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));

        gridLayout->addWidget(pushButton_equal, 5, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
#if QT_CONFIG(shortcut)
        label->setBuddy(pushButton_equal);
#endif // QT_CONFIG(shortcut)

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        pushButton_plus_minus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        pushButton_percentage->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        pushButton_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButton_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        pushButton_subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        pushButton_decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        pushButton_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        pushButton_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
