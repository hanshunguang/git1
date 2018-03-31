/********************************************************************************
** Form generated from reading UI file 'qnetwork.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QNETWORK_H
#define UI_QNETWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qnetworkClass
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *qnetworkClass)
    {
        if (qnetworkClass->objectName().isEmpty())
            qnetworkClass->setObjectName(QStringLiteral("qnetworkClass"));
        qnetworkClass->resize(600, 400);
        verticalLayout = new QVBoxLayout(qnetworkClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(qnetworkClass);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        pushButton = new QPushButton(qnetworkClass);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(qnetworkClass);

        QMetaObject::connectSlotsByName(qnetworkClass);
    } // setupUi

    void retranslateUi(QWidget *qnetworkClass)
    {
        qnetworkClass->setWindowTitle(QApplication::translate("qnetworkClass", "qnetwork", Q_NULLPTR));
        pushButton->setText(QApplication::translate("qnetworkClass", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qnetworkClass: public Ui_qnetworkClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QNETWORK_H
