#ifndef MYTHREAD_H
#define MYTHREAD_H
class hanshunguangclient;
#include <QThread>
#include <QList> 
class mythread : public QThread
{
	Q_OBJECT

public:
	void SetPath(QString path){ m_path = path; };
	mythread(QObject *parent);
	~mythread();
	void chakan(QString );
private:
	QString m_path = "";
	QList<QString> m_listFile;	
protected:
	void run();

signals:
	void signal_SendFileList(QString);
	void signal_myzhongzhuan_1(QString,bool clear=false);//bool clear=false�����ź������ڴ��������֮��Ŀ���
};

#endif // MYTHREAD_H
