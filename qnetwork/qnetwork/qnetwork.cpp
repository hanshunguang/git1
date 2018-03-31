#include "qnetwork.h"
#include <QPushButton>

qnetwork::qnetwork(QWidget *parent)
	: QWidget(parent)
{
	
	ui.setupUi(this);

	connect(ui.pushButton, &QPushButton::clicked, this, &qnetwork::slot_chicked);
}

qnetwork::~qnetwork()
{

}
void qnetwork::slot_chicked(bool Checked)
{
    html_text="";
	get(QUrl("http://www.baidu.com/?accoutn=fdas&pass=fdafda"));
}
void qnetwork::get(QUrl u)
{
	QNetworkRequest request;
	url = u;
	request.setUrl(url);
	reply = manager.get(request);
	connect(reply, &QNetworkReply::finished, this, &qnetwork::slot_finished);
}
void qnetwork::slot_finished()
{
	QByteArray bytes = reply->readAll();
	const QVariant redirectionTarget = reply->attribute(QNetworkRequest::RedirectionTargetAttribute);
	reply->deleteLater();
	reply = Q_NULLPTR;
	html_text = bytes;
	ui.textEdit->append(html_text.toUtf8());

}