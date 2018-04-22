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
	f.remove("a.txt"); //删除a.txt   //文件名为 a.txt 可以用“C:/a.txt”之类 */  
	/*QString fileName = QFileDialog::getOpenFileName(this, QString("读取匹配原图"), QString("E:\\"), QString("*.jpg *.bmp *.png"));
	if (fileName.isEmpty())
	{
		QMessageBox::warning(this, QString("warning"), QString("No image was selected!"));
		return;
	}
	QTextCodec *code = QTextCodec::codecForName("gb2312");
	std::string name = code->fromUnicode(fileName).data();*/

	//Qt获取所给文件夹下的所有第一层文件夹列表，返回值不包含当前传递的文件夹。
	//QTextCodec *code = QTextCodec::codecForName("UTF - 8");
	//QTextCodec::setCodecForLocale(code);
	
	
	//QString dirPath = QString("D:/大大/").toUtf8();//定义路径的方法
	//QString dirPath(QString::fromLocal8Bit("D:/大大/"));//识别带汉字的绝对路径

	//以下为-----------------lineEdit的输入的文字从默认的Unicode标准码转化为UTF-8遍码
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
	f.remove("a.txt"); //删除a.txt   //文件名为 a.txt 可以用“C:/a.txt”之类 */
	/*QString fileName = QFileDialog::getOpenFileName(this, QString("读取匹配原图"), QString("E:\\"), QString("*.jpg *.bmp *.png"));
	if (fileName.isEmpty())
	{
	QMessageBox::warning(this, QString("warning"), QString("No image was selected!"));
	return;
	}
	QTextCodec *code = QTextCodec::codecForName("gb2312");
	std::string name = code->fromUnicode(fileName).data();*/

	//Qt获取所给文件夹下的所有第一层文件夹列表，返回值不包含当前传递的文件夹。
	//QTextCodec *code = QTextCodec::codecForName("UTF - 8");
	//QTextCodec::setCodecForLocale(code);


	//QString dirPath = QString("D:/大大/").toUtf8();//定义路径的方法
	//QString dirPath(QString::fromLocal8Bit("D:/大大/"));//识别带汉字的绝对路径

	//以下为-----------------lineEdit的输入的文字从默认的Unicode标准码转化为UTF-8遍码
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
//删除文件夹  
bool filefolderread::DelDir(const QString &path)
{
   if (path.isEmpty()){
        return false;

	}
  QDir dir(path);
   if (!dir.exists()){
      return true;

	}
   dir.setFilter(QDir::AllEntries | QDir::NoDotAndDotDot); //设置过滤  
   QFileInfoList fileList = dir.entryInfoList(); // 获取所有的文件信息  
   foreach(QFileInfo file, fileList){ //遍历文件信息  
       if (file.isFile()){ // 是文件，删除  
          file.dir().remove(file.fileName());
		}
		else{ // 递归删除  
           /*DelDir(file.absoluteFilePath());*/
		}
	}
    return dir.rmpath(dir.absolutePath()); // 删除文件夹  
}
