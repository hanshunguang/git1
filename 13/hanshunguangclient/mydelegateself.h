#ifndef MYDELEGATESELF_H
#define MYDELEGATESELF_H

#include <QWidget>
#include "ui_mydelegateself.h"
#include<QPaintEvent>
class QFontMetrics;

class mydelegateself : public QWidget
{
	Q_OBJECT

public:
	mydelegateself(QWidget *parent = 0);
	~mydelegateself();
	void readdata();
	void paintEvent(QPaintEvent *e);
	QList<QString> listdata;
	
	int index = -1;
private:
	Ui::mydelegateself ui;
	bool mousePointInRect();
	void mouseMoveEvent(QMouseEvent *event);
	QPoint mousePoint;
	QPoint jieshouPoint;
	QRect rect1;
	QRect rectbrush;
	bool in=false;
	QFont font1;

	//初始值                                          1表示画文字    1表示画背景色   1表示画矩形
	void mydelegateself::huizhi(QPoint currentPos, int intdrawText, int BrushQColor = 0, int mydrawRect = 1);
	void quedingindex();
	
};
#endif // MYDELEGATESELF_H
