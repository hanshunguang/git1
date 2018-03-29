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
	while (true)//每5秒更新一次
	{
		m_listFile.clear();
		emit signal_myzhongzhuan_1("", true);
		chakan(m_path);
		
		sleep(5);//每5秒更新一次
	}
		
	
	
	
}
void mythread::chakan(QString path)
{
	//-----------------文件名遍历发送
		QDir dir(path);//路径赋值
			
				foreach(QFileInfo mfi, dir.entryInfoList())
				{
					if (mfi.isFile())//如果直接是文件
					{
						//	qDebug() << "File :" << mfi.fileName();
						
						m_listFile.append(mfi.fileName()); //文件名保存
						emit signal_myzhongzhuan_1(mfi.fileName());//发送这个文件名
					}
					else//其他
					{
						if (mfi.fileName() == "." || mfi.fileName() == "..")continue;//如果是目录（文件夹）忽略
						//qDebug() << "Entry Dir" << mfi.absoluteFilePath();
						chakan(mfi.absoluteFilePath());//查看此文件夹下的文件（目录下的文件）
					}
				}
			//	-------------------
}