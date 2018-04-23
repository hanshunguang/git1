/********************************************************************************
** Form generated from reading UI file 'filereadwrite.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEREADWRITE_H
#define UI_FILEREADWRITE_H

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

class Ui_filereadwrite
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *filereadwrite)
    {
        if (filereadwrite->objectName().isEmpty())
            filereadwrite->setObjectName(QStringLiteral("filereadwrite"));
        filereadwrite->resize(405, 300);
        verticalLayout = new QVBoxLayout(filereadwrite);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(filereadwrite);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        pushButton_2 = new QPushButton(filereadwrite);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(filereadwrite);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(filereadwrite);

        QMetaObject::connectSlotsByName(filereadwrite);
    } // setupUi

    void retranslateUi(QWidget *filereadwrite)
    {
        filereadwrite->setWindowTitle(QApplication::translate("filereadwrite", "filereadwrite", 0));
        pushButton_2->setText(QApplication::translate("filereadwrite", "read", 0));
        pushButton->setText(QApplication::translate("filereadwrite", "change", 0));
    } // retranslateUi

};

namespace Ui {
    class filereadwrite: public Ui_filereadwrite {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEREADWRITE_H
