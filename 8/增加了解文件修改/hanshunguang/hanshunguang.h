#ifndef HANSHUNGUANG_H
#define HANSHUNGUANG_H
#include <stdio.h>
#include <QtWidgets/QWidget>
#include "ui_hanshunguang.h"
#include "mythread.h"

#include <QString> 

class hanshunguang : public QWidget
{
	Q_OBJECT

public:
	hanshunguang(QWidget *parent = 0);
	~hanshunguang();
	
	
	
	QString str = "white man";
	
	mythread *m_thread=nullptr;
signals:
	void signal_test(int);
	void signal_myzhongzhuan(QString); //参数不同时中转信号槽模板
	
	void signal_myzhongzhuan1(QString, bool );
	
protected:
	void slot_btnClicked(bool  );
	void slot_test(int);
	void slot_myzhongzhuan();//参数不同时中转信号槽模板
	void slot_myzhongzhuan1();
	void slot_mysettext1(QString);
	void slot_click(QString);//参数不同时中转信号槽模板
	void slot_click1(QString, bool);
private:
	Ui::hanshunguangClass ui;
};

#endif // HANSHUNGUANG_H
