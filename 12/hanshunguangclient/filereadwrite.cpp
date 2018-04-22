#include "filereadwrite.h"
#include <QPushButton>
#include <QFile>
#include <QFileInfo>
#include <QDir>

#include <QString>
#include <QTextStream>
#include <QStringList>

filereadwrite::filereadwrite(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &filereadwrite::slot_btnClicked5);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &filereadwrite::slot_btnClicked6);
	
	/*
	QFile file;
	QDir::setCurrent("/tmp");
	file.setFileName("readme.txt");
	QDir::setCurrent("/home");
	file.open(QIODevice::ReadOnly);*/
}

/*
����ʵ���ļ����޸�
����
1.����һ��pushButton��������
��2.ɨ���ļ����е��ļ�������QStringlist�� 
3.��һ���ѷź����ļ�����txt�ļ�
��ʾ�ļ���
����pushButton��textedit������

4.��ȡ��ߵ����ļ�������QStringlist��
5.����Ļ�����Ĳ������ļ���
��
2.���ļ�������һ����
3.�ҿ��ļ�����������
4.
*/

filereadwrite::~filereadwrite()
{

}
void filereadwrite::slot_chick(bool checked)
{

	
	
}
void filereadwrite::slot_btnClicked5(bool  Checked)
{
	QFile file("D:/123/456.txt");
	QFileInfo info(file);
	if (QFileInfo(file).exists())
	{	
	
		file.rename("D:/123/789.txt");//������
	}	
}
/*if (file.open(QIODevice::ReadOnly|QIODevice::Text))
{
QTextStream stream(&file);
}*/
/*file_name = info.fileName();*/
/*file.setFileName("readme.txt");*/
/*QFile file;
QDir::setCurrent("/tmp/1.txt");
file.setFileName("readme.txt");*/
void filereadwrite::slot_btnClicked6(bool  Checked)
{
// 	QFile readfromfile("D:/123/gai.txt");
// 	if (readfromfile.open(QIODevice::ReadOnly | QIODevice::Text))
// 	{
// 		QString str="";
// 		QStringList strList;
// 		QTextStream stream(&readfromfile);
// 		str=stream.readAll();
// 
// 
// 
// 
// 	}
// 	readfromfile.close();
	int yuanfilenumber = 0, tochangefilenumber = 0;
	QStringList xinming;//����
	QStringList yuanming;//ԭ��
	//������-------------------
	QFile readfromfile("D:/123/gai.txt");
	if (readfromfile.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QString str = "";
		QString str1 = "D:/123/gai/";
		QString str2 = ".txt";
		QString tempStr = "";
		QString tempStr1 = "";
		int i = 0;
		QStringList strList;
		QStringList strList1;
		QTextStream stream(&readfromfile);
		str = stream.readAll();
		strList = str.split("\n");
		i = strList.count()-1;
		yuanfilenumber = i;
		tempStr = str1 ;
		for (int w = 0; w < i; w++)
		{
			tempStr1 = strList.at(w);
			tempStr1 = tempStr + tempStr1 + str2;
			strList1 << tempStr1;
		}
		xinming = strList1;
	}
	readfromfile.close();
	//������-------------------




	//��ԭ��-------------------
	//-----------------�ļ�����������
	//QFile readfromfile("D:/123/gai.txt");
	QString path = "D:/123/gai";
	QDir dir(path);//·����ֵ
	int n = 0;
	QStringList strListtochange;
	QStringList strListtochange1;
	int w = 0;
	foreach(QFileInfo mfi, dir.entryInfoList())
	{
	 if (mfi.isFile())//���ֱ�����ļ�
	 {
		strListtochange.append(mfi.fileName()); //�ļ�������
		n = strListtochange.count();
		tochangefilenumber = n;
		QString str1 = "D:/123/gai/";
		QString str2 = ".txt";
		QString tempStr;
		QString tempStr1;
	
		
			tempStr= strListtochange.at(w++);

			tempStr1 = str1 + tempStr;
			strListtochange1 << tempStr1;
	



		yuanming = strListtochange1;
	 }
	 else//����
	 {
		 if (mfi.fileName() == "." || mfi.fileName() == "..")continue;//�����Ŀ¼���ļ��У�����
		 //qDebug() << "Entry Dir" << mfi.absoluteFilePath();
		 //chakan(mfi.absoluteFilePath());//�鿴���ļ����µ��ļ���Ŀ¼�µ��ļ���
	 }
	}

	//	-------------------
	//��ԭ��-------------------

	if (yuanfilenumber == tochangefilenumber)
	{
		//������
		for (int i = 0; i < yuanfilenumber; i++)
		{
			QFile file(yuanming.at(i));
			QFileInfo info(file);
			if (QFileInfo(file).exists())
			{

				file.rename(xinming.at(i));//������
			}
		}

	}
	
}
/*
QString strAll;
 QStringList strList;
 QFile readFile("test.txt");
 if(readFile.open((QIODevice::ReadOnly|QIODevice::Text)))
 {
     QTextStream stream(&readFile);
     strAll=stream.readAll();
 }
 readFile.close();
 QFile writeFile("test.txt");
 if(writeFile.open(QIODevice::WriteOnly|QIODevice::Text))
 {
         QTextStream stream(&writeFile);
        strList=strAll.split("\n");
         for(int i=0;i<strList.count();i++)
        {
            if(i==strList.count()-1)
             {
                //���һ�в���Ҫ����
                stream<<strList.at(i);
             }
             else
             {
                stream<<strList.at(i)<<'\n';
             }

             if(strList.at(i).contains("iface eth0 inet static"))
            {
                 QString tempStr=strList.at(i+1);
                 tempStr.replace(0,tempStr.length(),"        address 192.168.1.111");
                 stream<<tempStr<<'\n';
                 tempStr=strList.at(i+2);
                tempStr.replace(0,tempStr.length(),"        netmask 255.255.255.0");
                 stream<<tempStr<<'\n';
                tempStr=strList.at(i+3);
                 tempStr.replace(0,tempStr.length(),"        network 192.168.1.0");
                 stream<<tempStr<<'\n';
                 tempStr=strList.at(i+4);
                tempStr.replace(0,tempStr.length(),"        geteway 192.168.1.1");
                 stream<<tempStr<<'\n';
                 i+=4;
             }
         }
 }
 writeFile.close();

*/