/********************************************************************************
** Form generated from reading UI file 'warwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WARWINDOW_H
#define UI_WARWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_WarWindow
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *WarWindow)
    {
        if (WarWindow->objectName().isEmpty())
            WarWindow->setObjectName(QStringLiteral("WarWindow"));
        WarWindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(WarWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(WarWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 30, 251, 131));

        retranslateUi(WarWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), WarWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WarWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(WarWindow);
    } // setupUi

    void retranslateUi(QDialog *WarWindow)
    {
        WarWindow->setWindowTitle(QApplication::translate("WarWindow", "Dialog", 0));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WarWindow: public Ui_WarWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WARWINDOW_H
