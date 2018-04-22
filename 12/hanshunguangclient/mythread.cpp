#include "mythread.h"
#include <QDir>
mythread::mythread(QObject *parent)
	: QThread(parent)
{
	m_listFile.clear();
}

mythread::~mythread()
{

}
void mythread::run()
{
	while (true)//ÿ5�����һ��
	{
		m_listFile.clear();
		emit signal_myzhongzhuan_1("", true);
		chakan(m_path);
		
		sleep(5);//ÿ5�����һ��
	}
		
	
	
	
}
void mythread::chakan(QString path)
{
	//-----------------�ļ�����������
		QDir dir(path);//·����ֵ
			
				foreach(QFileInfo mfi, dir.entryInfoList())
				{
					if (mfi.isFile())//���ֱ�����ļ�
					{
						//	qDebug() << "File :" << mfi.fileName();
						
						m_listFile.append(mfi.fileName()); //�ļ�������
						emit signal_myzhongzhuan_1(mfi.fileName());//��������ļ���
					}
					else//����
					{
						if (mfi.fileName() == "." || mfi.fileName() == "..")continue;//�����Ŀ¼���ļ��У�����
						//qDebug() << "Entry Dir" << mfi.absoluteFilePath();
						chakan(mfi.absoluteFilePath());//�鿴���ļ����µ��ļ���Ŀ¼�µ��ļ���
					}
				}
			//	-------------------
}