/********************************************************************************
** Form generated from reading UI file 'filefolderread.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEFOLDERREAD_H
#define UI_FILEFOLDERREAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_filefolderread
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;

    void setupUi(QWidget *filefolderread)
    {
        if (filefolderread->objectName().isEmpty())
            filefolderread->setObjectName(QStringLiteral("filefolderread"));
        filefolderread->resize(540, 561);
        verticalLayout = new QVBoxLayout(filefolderread);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEdit = new QLineEdit(filefolderread);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(filefolderread);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(filefolderread);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        textEdit = new QTextEdit(filefolderread);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);


        retranslateUi(filefolderread);

        QMetaObject::connectSlotsByName(filefolderread);
    } // setupUi

    void retranslateUi(QWidget *filefolderread)
    {
        filefolderread->setWindowTitle(QApplication::translate("filefolderread", "filefolderread", 0));
        pushButton->setText(QApplication::translate("filefolderread", "\345\267\262\347\273\217\345\241\253\345\206\231\350\267\257\345\276\204\351\251\254\344\270\212\350\216\267\345\217\226\346\226\207\344\273\266\345\244\271\345\206\205\344\277\241\346\201\257", 0));
        pushButton_2->setText(QApplication::translate("filefolderread", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class filefolderread: public Ui_filefolderread {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEFOLDERREAD_H
