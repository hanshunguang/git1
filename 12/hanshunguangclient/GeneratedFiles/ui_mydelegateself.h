/********************************************************************************
** Form generated from reading UI file 'mydelegateself.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYDELEGATESELF_H
#define UI_MYDELEGATESELF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mydelegateself
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;

    void setupUi(QWidget *mydelegateself)
    {
        if (mydelegateself->objectName().isEmpty())
            mydelegateself->setObjectName(QStringLiteral("mydelegateself"));
        mydelegateself->resize(400, 300);
        lineEdit = new QLineEdit(mydelegateself);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(280, 240, 113, 20));
        lineEdit_2 = new QLineEdit(mydelegateself);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 160, 113, 20));

        retranslateUi(mydelegateself);

        QMetaObject::connectSlotsByName(mydelegateself);
    } // setupUi

    void retranslateUi(QWidget *mydelegateself)
    {
        mydelegateself->setWindowTitle(QApplication::translate("mydelegateself", "mydelegateself", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mydelegateself: public Ui_mydelegateself {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYDELEGATESELF_H
