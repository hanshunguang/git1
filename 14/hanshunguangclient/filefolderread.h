#ifndef FILEFOLDERREAD_H
#define FILEFOLDERREAD_H
#include "ui_filefolderread.h"
#include <QWidget>
#include <QTextCodec>

#include <QPushButton>


class vector;
class filefolderread : public QWidget
{
	Q_OBJECT

public:
	filefolderread(QWidget *parent = 0);
	~filefolderread();
	void GetAllFileFolder(QString dirPath, std::vector<QString> &folder);
	void mydeletefile(QString dirPath, std::vector<QString> &folder);
	bool DelDir(const QString &path);
private:
	Ui::filefolderread ui;
	
protected:
	void slot_btnClicked7(bool);
	void slot_btnClicked8(bool);
	

};

#endif // FILEFOLDERREAD_H
