/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *_4;
    QPushButton *_6;
    QPushButton *_9;
    QPushButton *form;
    QPushButton *_2;
    QPushButton *AC;
    QPushButton *add;
    QPushButton *percent;
    QPushButton *minus;
    QPushButton *_8;
    QPushButton *record;
    QPushButton *_7;
    QPushButton *_3;
    QPushButton *_1;
    QPushButton *_0;
    QPushButton *multiply;
    QPushButton *division;
    QPushButton *_5;
    QPushButton *point;
    QPushButton *equal;
    QPushButton *left;
    QPushButton *OK;
    QPushButton *right;
    QPushButton *FB;
    QPushButton *BB;
    QPushButton *delete_2;
    QPushButton *All;
    QPushButton *m_minus;
    QPushButton *mr;
    QPushButton *m_add;
    QPushButton *mc;
    QPushButton *del;
    QPushButton *back;
    QPushButton *square;
    QPushButton *sqrt;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(745, 645);
        MainWindow->setStyleSheet(QString::fromUtf8("/* \344\270\273\347\252\227\345\217\243\350\203\214\346\231\257 */\n"
"QMainWindow {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #6A11CB, stop: 1 #2575FC);\n"
"}\n"
"\n"
"/* \346\211\200\346\234\211\346\214\211\351\222\256\347\232\204\345\237\272\347\241\200\346\240\267\345\274\217 */\n"
"QPushButton {\n"
"    font-size: 18px;\n"
"    font-weight: bold;\n"
"    font-family: 'Microsoft YaHei';\n"
"    border-radius: 25px;\n"
"    min-width: 50px;\n"
"    min-height: 50px;\n"
"    border: 2px solid #555;\n"
"}\n"
"\n"
"/* \346\225\260\345\255\227\346\214\211\351\222\256 */\n"
"QPushButton[text=\"0\"],\n"
"QPushButton[text=\"1\"],\n"
"QPushButton[text=\"2\"],\n"
"QPushButton[text=\"3\"],\n"
"QPushButton[text=\"4\"],\n"
"QPushButton[text=\"5\"],\n"
"QPushButton[text=\"6\"],\n"
"QPushButton[text=\"7\"],\n"
"QPushButton[text=\"8\"],\n"
"QPushButton[text=\"9\"],\n"
"QPushButton[text=\".\"] {\n"
"    background-color: #FFFFFF;\n"
"    color: #"
                        "2C3E50;\n"
"}\n"
"\n"
"/* \350\277\220\347\256\227\347\254\246\346\214\211\351\222\256 - \347\272\242\350\211\262\345\255\227\344\275\223 */\n"
"QPushButton[text=\"\303\227\"],\n"
"QPushButton[text=\"\303\267\"],\n"
"QPushButton[text=\"+\"],\n"
"QPushButton[text=\"-\"] {\n"
"    background-color: #F8F9FA;\n"
"    color: #E74C3C;  /* \347\272\242\350\211\262 */\n"
"}\n"
"\n"
"/* \347\255\211\345\217\267\346\214\211\351\222\256 */\n"
"QPushButton[text=\"=\"] {\n"
"    background-color: #3498DB;\n"
"    color: red;\n"
"}\n"
"\n"
"/* \345\210\240\351\231\244\345\222\214\346\270\205\351\231\244\346\214\211\351\222\256 */\n"
"QPushButton[text=\"\342\214\253\"],\n"
"QPushButton[text=\"C\"] {\n"
"    background-color: #E74C3C;\n"
"    color: red;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\202\254\345\201\234\346\225\210\346\236\234 */\n"
"QPushButton:hover {\n"
"    background-color: #BDC3C7;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\214\211\344\270\213\346\225\210\346\236\234 */\n"
"QPushButton:pressed {\n"
""
                        "    background-color: #95A5A6;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(-230, 20, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 170, 351, 471));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        _4 = new QPushButton(layoutWidget);
        _4->setObjectName(QString::fromUtf8("_4"));
        _4->setMinimumSize(QSize(54, 54));
        _4->setMaximumSize(QSize(60, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setBold(true);
        font.setWeight(75);
        _4->setFont(font);
        _4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(_4, 4, 0, 1, 1);

        _6 = new QPushButton(layoutWidget);
        _6->setObjectName(QString::fromUtf8("_6"));
        _6->setMinimumSize(QSize(54, 54));
        _6->setMaximumSize(QSize(60, 60));
        _6->setFont(font);
        _6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(_6, 4, 2, 1, 1);

        _9 = new QPushButton(layoutWidget);
        _9->setObjectName(QString::fromUtf8("_9"));
        _9->setMinimumSize(QSize(54, 54));
        _9->setMaximumSize(QSize(60, 60));
        _9->setFont(font);
        _9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(_9, 3, 2, 1, 1);

        form = new QPushButton(layoutWidget);
        form->setObjectName(QString::fromUtf8("form"));
        form->setMinimumSize(QSize(54, 54));
        form->setMaximumSize(QSize(60, 60));
        form->setFont(font);
        form->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(form, 6, 4, 1, 1);

        _2 = new QPushButton(layoutWidget);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setMinimumSize(QSize(54, 54));
        _2->setMaximumSize(QSize(60, 60));
        _2->setFont(font);
        _2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(_2, 5, 1, 1, 1);

        AC = new QPushButton(layoutWidget);
        AC->setObjectName(QString::fromUtf8("AC"));
        AC->setMinimumSize(QSize(54, 54));
        AC->setMaximumSize(QSize(60, 60));
        AC->setFont(font);
        AC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(AC, 2, 0, 1, 1);

        add = new QPushButton(layoutWidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setMinimumSize(QSize(54, 54));
        add->setMaximumSize(QSize(60, 60));
        add->setFont(font);
        add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(add, 5, 3, 1, 1);

        percent = new QPushButton(layoutWidget);
        percent->setObjectName(QString::fromUtf8("percent"));
        percent->setMinimumSize(QSize(54, 54));
        percent->setMaximumSize(QSize(60, 60));
        percent->setFont(font);
        percent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(percent, 6, 0, 1, 1);

        minus = new QPushButton(layoutWidget);
        minus->setObjectName(QString::fromUtf8("minus"));
        minus->setMinimumSize(QSize(54, 54));
        minus->setMaximumSize(QSize(60, 60));
        minus->setFont(font);
        minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(minus, 4, 3, 1, 1);

        _8 = new QPushButton(layoutWidget);
        _8->setObjectName(QString::fromUtf8("_8"));
        _8->setMinimumSize(QSize(54, 54));
        _8->setMaximumSize(QSize(60, 60));
        _8->setFont(font);
        _8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(_8, 3, 1, 1, 1);

        record = new QPushButton(layoutWidget);
        record->setObjectName(QString::fromUtf8("record"));
        record->setMinimumSize(QSize(54, 54));
        record->setMaximumSize(QSize(60, 60));
        record->setFont(font);
        record->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(record, 0, 0, 1, 1);

        _7 = new QPushButton(layoutWidget);
        _7->setObjectName(QString::fromUtf8("_7"));
        _7->setMinimumSize(QSize(54, 54));
        _7->setMaximumSize(QSize(60, 60));
        _7->setFont(font);
        _7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(_7, 3, 0, 1, 1);

        _3 = new QPushButton(layoutWidget);
        _3->setObjectName(QString::fromUtf8("_3"));
        _3->setMinimumSize(QSize(54, 54));
        _3->setMaximumSize(QSize(60, 60));
        _3->setFont(font);
        _3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(_3, 5, 2, 1, 1);

        _1 = new QPushButton(layoutWidget);
        _1->setObjectName(QString::fromUtf8("_1"));
        _1->setMinimumSize(QSize(54, 54));
        _1->setMaximumSize(QSize(60, 60));
        _1->setFont(font);
        _1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(_1, 5, 0, 1, 1);

        _0 = new QPushButton(layoutWidget);
        _0->setObjectName(QString::fromUtf8("_0"));
        _0->setMinimumSize(QSize(54, 54));
        _0->setMaximumSize(QSize(60, 60));
        _0->setFont(font);
        _0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(_0, 6, 1, 1, 1);

        multiply = new QPushButton(layoutWidget);
        multiply->setObjectName(QString::fromUtf8("multiply"));
        multiply->setMinimumSize(QSize(54, 54));
        multiply->setMaximumSize(QSize(60, 60));
        multiply->setFont(font);
        multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(multiply, 3, 3, 1, 1);

        division = new QPushButton(layoutWidget);
        division->setObjectName(QString::fromUtf8("division"));
        division->setMinimumSize(QSize(54, 54));
        division->setMaximumSize(QSize(60, 60));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        division->setFont(font1);
        division->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(division, 2, 3, 1, 1);

        _5 = new QPushButton(layoutWidget);
        _5->setObjectName(QString::fromUtf8("_5"));
        _5->setMinimumSize(QSize(54, 54));
        _5->setMaximumSize(QSize(60, 60));
        _5->setFont(font);
        _5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(_5, 4, 1, 1, 1);

        point = new QPushButton(layoutWidget);
        point->setObjectName(QString::fromUtf8("point"));
        point->setMinimumSize(QSize(54, 54));
        point->setMaximumSize(QSize(60, 60));
        point->setFont(font);
        point->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(point, 6, 2, 1, 1);

        equal = new QPushButton(layoutWidget);
        equal->setObjectName(QString::fromUtf8("equal"));
        equal->setMinimumSize(QSize(54, 54));
        equal->setMaximumSize(QSize(60, 60));
        equal->setFont(font);
        equal->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(equal, 6, 3, 1, 1);

        left = new QPushButton(layoutWidget);
        left->setObjectName(QString::fromUtf8("left"));
        left->setMinimumSize(QSize(54, 54));
        left->setMaximumSize(QSize(60, 60));
        left->setFont(font);
        left->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(left, 1, 0, 1, 1);

        OK = new QPushButton(layoutWidget);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setMinimumSize(QSize(54, 54));
        OK->setMaximumSize(QSize(60, 60));
        OK->setFont(font1);
        OK->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(OK, 1, 1, 1, 1);

        right = new QPushButton(layoutWidget);
        right->setObjectName(QString::fromUtf8("right"));
        right->setMinimumSize(QSize(54, 54));
        right->setMaximumSize(QSize(60, 60));
        right->setFont(font);
        right->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(right, 1, 2, 1, 1);

        FB = new QPushButton(layoutWidget);
        FB->setObjectName(QString::fromUtf8("FB"));
        FB->setMinimumSize(QSize(54, 54));
        FB->setMaximumSize(QSize(60, 60));
        FB->setFont(font);
        FB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(FB, 2, 1, 1, 1);

        BB = new QPushButton(layoutWidget);
        BB->setObjectName(QString::fromUtf8("BB"));
        BB->setMinimumSize(QSize(54, 54));
        BB->setMaximumSize(QSize(60, 60));
        BB->setFont(font);
        BB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(BB, 2, 2, 1, 1);

        delete_2 = new QPushButton(layoutWidget);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setMinimumSize(QSize(54, 54));
        delete_2->setMaximumSize(QSize(60, 60));
        delete_2->setFont(font);
        delete_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(delete_2, 0, 1, 1, 1);

        All = new QPushButton(layoutWidget);
        All->setObjectName(QString::fromUtf8("All"));
        All->setMinimumSize(QSize(54, 54));
        All->setMaximumSize(QSize(60, 60));
        All->setFont(font);
        All->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(All, 0, 2, 1, 1);

        m_minus = new QPushButton(layoutWidget);
        m_minus->setObjectName(QString::fromUtf8("m_minus"));
        m_minus->setMinimumSize(QSize(54, 54));
        m_minus->setMaximumSize(QSize(60, 60));
        m_minus->setFont(font);
        m_minus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(m_minus, 1, 3, 1, 1);

        mr = new QPushButton(layoutWidget);
        mr->setObjectName(QString::fromUtf8("mr"));
        mr->setMinimumSize(QSize(54, 54));
        mr->setMaximumSize(QSize(60, 60));
        mr->setFont(font);
        mr->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(mr, 1, 4, 1, 1);

        m_add = new QPushButton(layoutWidget);
        m_add->setObjectName(QString::fromUtf8("m_add"));
        m_add->setMinimumSize(QSize(54, 54));
        m_add->setMaximumSize(QSize(60, 60));
        m_add->setFont(font);
        m_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(m_add, 0, 3, 1, 1);

        mc = new QPushButton(layoutWidget);
        mc->setObjectName(QString::fromUtf8("mc"));
        mc->setMinimumSize(QSize(54, 54));
        mc->setMaximumSize(QSize(60, 60));
        mc->setFont(font);
        mc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(mc, 0, 4, 1, 1);

        del = new QPushButton(layoutWidget);
        del->setObjectName(QString::fromUtf8("del"));
        del->setMinimumSize(QSize(54, 54));
        del->setMaximumSize(QSize(60, 60));
        del->setFont(font);
        del->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(del, 2, 4, 1, 1);

        back = new QPushButton(layoutWidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setMinimumSize(QSize(54, 54));
        back->setMaximumSize(QSize(60, 60));
        back->setFont(font);
        back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(back, 3, 4, 1, 1);

        square = new QPushButton(layoutWidget);
        square->setObjectName(QString::fromUtf8("square"));
        square->setMinimumSize(QSize(54, 54));
        square->setMaximumSize(QSize(60, 60));
        square->setFont(font);
        square->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(square, 5, 4, 1, 1);

        sqrt = new QPushButton(layoutWidget);
        sqrt->setObjectName(QString::fromUtf8("sqrt"));
        sqrt->setMinimumSize(QSize(54, 54));
        sqrt->setMaximumSize(QSize(60, 60));
        sqrt->setFont(font);
        sqrt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    border-radius: 30px;  /* \345\215\212\345\276\204\350\256\276\344\270\272\351\253\230\345\272\246/\345\256\275\345\272\246\347\232\204\344\270\200\345\215\212 */\n"
"    border: 2px solid #8f8f91;\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #f6f7fa, stop: 1 #dadbde);\n"
"    font-size: 18px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #e0e0e0;\n"
"}"));

        gridLayout->addWidget(sqrt, 4, 4, 1, 1);

        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 20, 351, 91));
        textEdit->setStyleSheet(QString::fromUtf8("/* \346\230\276\347\244\272\347\252\227\345\217\243\346\240\267\345\274\217 */\n"
"QLineEdit#display {\n"
"    background-color: #1E272E;          /* \346\267\261\350\211\262\350\203\214\346\231\257 */\n"
"    color: #ECF0F1;                     /* \344\272\256\350\211\262\346\226\207\345\255\227 */\n"
"    border: 2px solid #2C3E50;          /* \350\276\271\346\241\206 */\n"
"    border-radius: 8px;                 /* \345\234\206\350\247\222 */\n"
"    padding: 15px 10px;                 /* \345\206\205\350\276\271\350\267\235 */\n"
"    font-size: 24px;                    /* \345\255\227\344\275\223\345\244\247\345\260\217 */\n"
"    font-weight: bold;                  /* \347\262\227\344\275\223 */\n"
"    selection-background-color: #3498DB;/* \351\200\211\344\270\255\346\226\207\346\234\254\350\203\214\346\231\257\350\211\262 */\n"
"    selection-color: white;             /* \351\200\211\344\270\255\346\226\207\346\234\254\351\242\234\350\211\262 */\n"
"}\n"
"\n"
"/* \346\210\226\350\200\205\344\275\277\347"
                        "\224\250\347\261\273\351\200\211\346\213\251\345\231\250 */\n"
"QLineEdit.result-display {\n"
"    background-color: #2C3E50;\n"
"    color: #ECF0F1;\n"
"    border: 2px solid #34495E;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"    font-size: 22px;\n"
"    font-family: 'Courier New';         /* \347\255\211\345\256\275\345\255\227\344\275\223\357\274\214\346\225\260\345\255\227\345\257\271\351\275\220\346\233\264\346\225\264\351\275\220 */\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 110, 351, 51));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 745, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        _4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        _6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        _9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        form->setText(QCoreApplication::translate("MainWindow", "form", nullptr));
        _2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        _8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        record->setText(QCoreApplication::translate("MainWindow", "\360\237\225\222", nullptr));
        _7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        _3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        _1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        _0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        multiply->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        division->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        _5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        point->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        left->setText(QCoreApplication::translate("MainWindow", "\342\206\220", nullptr));
        OK->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        right->setText(QCoreApplication::translate("MainWindow", "\342\206\222", nullptr));
        FB->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        BB->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        delete_2->setText(QCoreApplication::translate("MainWindow", "del", nullptr));
        All->setText(QCoreApplication::translate("MainWindow", "All", nullptr));
        m_minus->setText(QCoreApplication::translate("MainWindow", "m-", nullptr));
        mr->setText(QCoreApplication::translate("MainWindow", "mr", nullptr));
        m_add->setText(QCoreApplication::translate("MainWindow", "m+", nullptr));
        mc->setText(QCoreApplication::translate("MainWindow", "mc", nullptr));
        del->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        back->setText(QCoreApplication::translate("MainWindow", "\342\206\251", nullptr));
        square->setText(QCoreApplication::translate("MainWindow", "\342\226\241\302\262", nullptr));
        sqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
