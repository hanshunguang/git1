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
	int n = -1;
	struct MyStruct
	{
		int intdrawText;
		int BrushQColor;
		int mydrawRect;
		MyStruct(int intdrawText, int BrushQColor, int mydrawRect)
		{
			this->intdrawText = intdrawText;
			this->BrushQColor = BrushQColor;
			this->mydrawRect = mydrawRect;
		}
		bool operator==(MyStruct &other)
		{
			if (this->intdrawText == other.intdrawText&&
				this->BrushQColor == other.BrushQColor&&
				this->mydrawRect == other.mydrawRect)
			{
				return true;
			}

			else
			{
				return false;
			}

		}
		bool operator!=(MyStruct &other)
		{
			if (this->intdrawText != other.intdrawText ||
				this->BrushQColor != other.BrushQColor ||
				this->mydrawRect != other.mydrawRect)
			{
				return true;
			}

			else
			{
				return false;
			}

		}

	};

	MyStruct zhuangTai1 = { 1, 0, 1 };//画文字和矩形
	MyStruct zhuangTai2 = { 0, 0, 1 };//画矩形
	MyStruct zhuangTai3 = { 0, 0, 0 };//空跑
	MyStruct zhuangTai4 = { 0, 1, 1 };//画刷和矩形
	//初始值                                          1表示画文字    1表示画背景色   1表示画矩形
	void mydelegateself::huizhi(QPoint currentPos, MyStruct zhuangTai);
	/*void mydelegateself::huizhi(QPoint currentPos, int intdrawText, int BrushQColor = 0, int mydrawRect = 1);*/
	void quedingindex();
	
};
#endif // MYDELEGATESELF_H
