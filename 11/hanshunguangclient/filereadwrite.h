#ifndef FILEREADWRITE_H
#define FILEREADWRITE_H

#include <QWidget>
#include "ui_filereadwrite.h"

class QStringList;
class filereadwrite : public QWidget
{
	Q_OBJECT
	public:
	filereadwrite(QWidget *parent = 0);
	~filereadwrite();

	void append(const QString &text);
	QString file_name;
private:
	Ui::filereadwrite ui;
	
signals:
	void clicked(bool checked = false);
protected:
	void slot_chick(bool checked);
	void slot_btnClicked5(bool);
	void slot_btnClicked6(bool);

};

#endif // FILEREADWRITE_H
