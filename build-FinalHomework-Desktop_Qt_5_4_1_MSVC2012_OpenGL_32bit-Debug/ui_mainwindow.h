/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *input;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QPushButton *pushButton_3;
    QLabel *label_16;
    QWidget *search;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_8;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *lineEdit_14;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *pushButton_5;
    QWidget *Offer;
    QWidget *Hot;
    QWidget *Sim;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(433, 488);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 431, 311));
        input = new QWidget();
        input->setObjectName(QStringLiteral("input"));
        label = new QLabel(input);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 31, 21));
        label_2 = new QLabel(input);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 80, 31, 21));
        label_3 = new QLabel(input);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 140, 31, 21));
        label_4 = new QLabel(input);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 110, 31, 21));
        label_5 = new QLabel(input);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 170, 31, 21));
        label_6 = new QLabel(input);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 50, 31, 21));
        lineEdit = new QLineEdit(input);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 20, 113, 20));
        lineEdit_2 = new QLineEdit(input);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 50, 113, 20));
        lineEdit_3 = new QLineEdit(input);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(60, 80, 113, 20));
        lineEdit_4 = new QLineEdit(input);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(60, 110, 113, 20));
        lineEdit_5 = new QLineEdit(input);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(60, 140, 113, 20));
        lineEdit_6 = new QLineEdit(input);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(60, 170, 113, 20));
        pushButton = new QPushButton(input);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 250, 75, 23));
        pushButton_2 = new QPushButton(input);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 250, 75, 23));
        label_7 = new QLabel(input);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 210, 54, 12));
        lineEdit_7 = new QLineEdit(input);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(60, 200, 113, 20));
        pushButton_3 = new QPushButton(input);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 250, 101, 23));
        label_16 = new QLabel(input);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(210, 70, 181, 81));
        QFont font;
        font.setFamily(QStringLiteral("3ds Light"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label_16->setFont(font);
        tabWidget->addTab(input, QString());
        search = new QWidget();
        search->setObjectName(QStringLiteral("search"));
        pushButton_4 = new QPushButton(search);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(20, 250, 75, 23));
        lineEdit_8 = new QLineEdit(search);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(70, 20, 113, 20));
        label_8 = new QLabel(search);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 140, 31, 21));
        label_9 = new QLabel(search);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 50, 31, 21));
        label_10 = new QLabel(search);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 20, 31, 21));
        lineEdit_9 = new QLineEdit(search);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(70, 140, 113, 20));
        lineEdit_10 = new QLineEdit(search);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(70, 200, 113, 20));
        lineEdit_11 = new QLineEdit(search);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(70, 170, 113, 20));
        lineEdit_12 = new QLineEdit(search);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(70, 110, 113, 20));
        lineEdit_13 = new QLineEdit(search);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(70, 50, 113, 20));
        label_11 = new QLabel(search);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 110, 31, 21));
        label_12 = new QLabel(search);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 170, 31, 21));
        label_13 = new QLabel(search);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 210, 54, 12));
        lineEdit_14 = new QLineEdit(search);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(70, 80, 113, 20));
        label_14 = new QLabel(search);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 80, 31, 21));
        label_15 = new QLabel(search);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(240, 20, 141, 201));
        pushButton_5 = new QPushButton(search);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(110, 250, 75, 23));
        tabWidget->addTab(search, QString());
        Offer = new QWidget();
        Offer->setObjectName(QStringLiteral("Offer"));
        tabWidget->addTab(Offer, QString());
        Hot = new QWidget();
        Hot->setObjectName(QStringLiteral("Hot"));
        tabWidget->addTab(Hot, QString());
        Sim = new QWidget();
        Sim->setObjectName(QStringLiteral("Sim"));
        tabWidget->addTab(Sim, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 433, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QStringLiteral("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\272\272\344\272\213\347\256\241\347\220\206\347\263\273\347\273\237", 0));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\345\247\223\345\220\215</p></body></html>", 0));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\346\200\247\345\210\253</p><p><br/></p></body></html>", 0));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\345\255\246\345\216\206</p></body></html>", 0));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\345\271\264\351\276\204</p></body></html>", 0));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\344\270\223\344\270\232</p></body></html>", 0));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\345\262\227\344\275\215</p></body></html>", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\345\275\225\345\205\245", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "\351\207\215\346\226\260\350\276\223\345\205\245", 0));
        label_7->setText(QApplication::translate("MainWindow", "\347\274\226\345\217\267", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220\345\217\257\347\224\250\347\274\226\345\217\267", 0));
        label_16->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(input), QApplication::translate("MainWindow", "\345\275\225\345\205\245", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
        label_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\345\255\246\345\216\206</p></body></html>", 0));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\345\262\227\344\275\215</p></body></html>", 0));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\345\247\223\345\220\215</p></body></html>", 0));
        label_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\345\271\264\351\276\204</p></body></html>", 0));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\344\270\223\344\270\232</p></body></html>", 0));
        label_13->setText(QApplication::translate("MainWindow", "\347\274\226\345\217\267", 0));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\346\200\247\345\210\253</p><p><br/></p></body></html>", 0));
        label_15->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252", 0));
        tabWidget->setTabText(tabWidget->indexOf(search), QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
        tabWidget->setTabText(tabWidget->indexOf(Offer), QApplication::translate("MainWindow", "\345\275\223\346\234\210\345\272\224\350\201\230\344\272\272\346\225\260\346\237\245\350\257\242", 0));
        tabWidget->setTabText(tabWidget->indexOf(Hot), QApplication::translate("MainWindow", "\345\262\227\344\275\215\347\203\255\345\272\246\347\273\237\350\256\241", 0));
        tabWidget->setTabText(tabWidget->indexOf(Sim), QApplication::translate("MainWindow", "\344\272\272\345\221\230\346\265\201\345\212\250\346\250\241\346\213\237", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
