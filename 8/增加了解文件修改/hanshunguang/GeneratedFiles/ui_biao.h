/********************************************************************************
** Form generated from reading UI file 'biao.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BIAO_H
#define UI_BIAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_biao
{
public:
    QTableView *tableView;

    void setupUi(QWidget *biao)
    {
        if (biao->objectName().isEmpty())
            biao->setObjectName(QStringLiteral("biao"));
        biao->resize(400, 301);
        tableView = new QTableView(biao);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 51, 391, 231));

        retranslateUi(biao);

        QMetaObject::connectSlotsByName(biao);
    } // setupUi

    void retranslateUi(QWidget *biao)
    {
        biao->setWindowTitle(QApplication::translate("biao", "biao", 0));
    } // retranslateUi

};

namespace Ui {
    class biao: public Ui_biao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BIAO_H
