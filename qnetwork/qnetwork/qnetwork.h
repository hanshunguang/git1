#ifndef QNETWORK_H
#define QNETWORK_H

#include <QtWidgets/QWidget>
#include "ui_qnetwork.h"
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QString>
class qnetwork : public QWidget
{
	Q_OBJECT

public:
	qnetwork(QWidget *parent = 0);
	~qnetwork();

private:
	Ui::qnetworkClass ui;
	void slot_chicked(bool);
	void get(QUrl qu);
	QUrl url="";
	QNetworkReply *reply=nullptr;
	QNetworkAccessManager manager;
	void slot_finished();
	QString html_text;

};

#endif // QNETWORK_H
