#ifndef HANSHUNGUANGCLIENT_H
#define HANSHUNGUANGCLIENT_H
#include <stdio.h>
#include <QtWidgets/QWidget>
#include "ui_hanshunguangclient.h"
#include "mythread.h"

#include <QString> 

class hanshunguangclient : public QWidget
{
	Q_OBJECT

public:
	hanshunguangclient(QWidget *parent = 0);
	~hanshunguangclient();
	
	
	
	QString str = "white man";
	
	mythread *m_thread=nullptr;
signals:
	void signal_test(int);
	void signal_myzhongzhuan(QString); //������ͬʱ��ת�źŲ�ģ��
	
	void signal_myzhongzhuan1(QString, bool );
	
protected:
	void slot_btnClicked(bool  );
	void slot_test(int);
	void slot_myzhongzhuan();//������ͬʱ��ת�źŲ�ģ��
	void slot_myzhongzhuan1();
	void slot_mysettext1(QString);
	void slot_click(QString);//������ͬʱ��ת�źŲ�ģ��
	void slot_click1(QString, bool);
private:
	Ui::hanshunguangclientClass ui;
};

#endif // HANSHUNGUANGCLIENT_H
