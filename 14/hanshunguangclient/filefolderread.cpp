#include "filefolderread.h"
#include <vector>
#include <QDir>
#include <QTextCodec>
filefolderread::filefolderread(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton, &QPushButton::clicked, this, &filefolderread::slot_btnClicked7);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &filefolderread::slot_btnClicked8);
}

filefolderread::~filefolderread()
{

}
void filefolderread::slot_btnClicked7(bool  Checked)
{
	
	/*QFile f;
	f.remove("a.txt"); //ɾ��a.txt   //�ļ���Ϊ a.txt �����á�C:/a.txt��֮�� */  
	/*QString fileName = QFileDialog::getOpenFileName(this, QString("��ȡƥ��ԭͼ"), QString("E:\\"), QString("*.jpg *.bmp *.png"));
	if (fileName.isEmpty())
	{
		QMessageBox::warning(this, QString("warning"), QString("No image was selected!"));
		return;
	}
	QTextCodec *code = QTextCodec::codecForName("gb2312");
	std::string name = code->fromUnicode(fileName).data();*/

	//Qt��ȡ�����ļ����µ����е�һ���ļ����б�����ֵ��������ǰ���ݵ��ļ��С�
	//QTextCodec *code = QTextCodec::codecForName("UTF - 8");
	//QTextCodec::setCodecForLocale(code);
	
	
	//QString dirPath = QString("D:/���/").toUtf8();//����·���ķ���
	//QString dirPath(QString::fromLocal8Bit("D:/���/"));//ʶ������ֵľ���·��

	//����Ϊ-----------------lineEdit����������ִ�Ĭ�ϵ�Unicode��׼��ת��ΪUTF-8����
	QString text = QTextCodec::codecForName("UTF-8")->fromUnicode(ui.lineEdit->text());


	
	//-------------
	
	QString dirPath(text);
	std::vector<QString>  folder;
	
	GetAllFileFolder(dirPath, folder);
	
}
void filefolderread::GetAllFileFolder(QString dirPath, std::vector<QString> &folder)

{

	QDir dir(dirPath);;
	QString strfolder;
	dir.setFilter(QDir::Dirs);

	foreach(QFileInfo fullDir, dir.entryInfoList())

	{

		if (fullDir.fileName() == "." || fullDir.fileName() == "..") continue;

		folder.push_back(fullDir.absoluteFilePath());
		strfolder = fullDir.absoluteFilePath();

		ui.textEdit->append(strfolder);
		GetAllFileFolder(fullDir.absoluteFilePath(), folder);

	}

}
void filefolderread::slot_btnClicked8(bool  Checked)
{

	/*QFile f;
	f.remove("a.txt"); //ɾ��a.txt   //�ļ���Ϊ a.txt �����á�C:/a.txt��֮�� */
	/*QString fileName = QFileDialog::getOpenFileName(this, QString("��ȡƥ��ԭͼ"), QString("E:\\"), QString("*.jpg *.bmp *.png"));
	if (fileName.isEmpty())
	{
	QMessageBox::warning(this, QString("warning"), QString("No image was selected!"));
	return;
	}
	QTextCodec *code = QTextCodec::codecForName("gb2312");
	std::string name = code->fromUnicode(fileName).data();*/

	//Qt��ȡ�����ļ����µ����е�һ���ļ����б�����ֵ��������ǰ���ݵ��ļ��С�
	//QTextCodec *code = QTextCodec::codecForName("UTF - 8");
	//QTextCodec::setCodecForLocale(code);


	//QString dirPath = QString("D:/���/").toUtf8();//����·���ķ���
	//QString dirPath(QString::fromLocal8Bit("D:/���/"));//ʶ������ֵľ���·��

	//����Ϊ-----------------lineEdit����������ִ�Ĭ�ϵ�Unicode��׼��ת��ΪUTF-8����
	QString text = QTextCodec::codecForName("UTF-8")->fromUnicode(ui.lineEdit->text());



	//-------------

	QString dirPath(text);
	std::vector<QString>  folder;

	mydeletefile(dirPath, folder);

}

void filefolderread::mydeletefile(QString dirPath, std::vector<QString> &folder)

{
	
	QDir dir(dirPath);
	DelDir(dirPath);
	/*QFile f;*/
	/*f.remove(QString::fromLocal8Bit("D:/123/gai/7.txt"));*/
	//QString strfolder;
	//dir.setFilter(QDir::Dirs);

	//foreach(QFileInfo fullDir, dir.entryInfoList())

	//{

	//	if (fullDir.fileName() == "." || fullDir.fileName() == "..") continue;

	//	folder.push_back(fullDir.absoluteFilePath());
	//	strfolder = fullDir.absoluteFilePath();

	//	ui.textEdit->append(strfolder);
	//	GetAllFileFolder(fullDir.absoluteFilePath(), folder);

	//}

}
//ɾ���ļ���  
bool filefolderread::DelDir(const QString &path)
{
   if (path.isEmpty()){
        return false;

	}
  QDir dir(path);
   if (!dir.exists()){
      return true;

	}
   dir.setFilter(QDir::AllEntries | QDir::NoDotAndDotDot); //���ù���  
   QFileInfoList fileList = dir.entryInfoList(); // ��ȡ���е��ļ���Ϣ  
   foreach(QFileInfo file, fileList){ //�����ļ���Ϣ  
       if (file.isFile()){ // ���ļ���ɾ��  
          file.dir().remove(file.fileName());
		}
		else{ // �ݹ�ɾ��  
           /*DelDir(file.absoluteFilePath());*/
		}
	}
    return dir.rmpath(dir.absolutePath()); // ɾ���ļ���  
}
