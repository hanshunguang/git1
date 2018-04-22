#include "mydelegateself.h"
#include <QPainter> 
#include <QFontMetrics> 
mydelegateself::mydelegateself(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	 readdata();
	 setMouseTracking(true);
}

mydelegateself::~mydelegateself()
{

}
void mydelegateself::readdata()
{
	
	for (int i = 0; i < 10;i++)
	{
		listdata.append(QString("abc+%1").arg(i));
		
	}
	/*int index = listdata.size;*/
}

void mydelegateself::paintEvent(QPaintEvent *e)
{
	QPoint currentDrawTextPos(50, 50);
	jieshouPoint = currentDrawTextPos;
	QPoint currentNoTextPos(200, 50);
	currentNoTextPos = currentDrawTextPos;
	int intdrawText = 1; //1表示画文字
	huizhi(jieshouPoint, 0, 0, 0);
	
	huizhi(currentDrawTextPos, intdrawText,0,1);

	intdrawText = 0;//1表示不画文字
	huizhi(currentNoTextPos, intdrawText, 1, 1);
}
void mydelegateself::mouseMoveEvent(QMouseEvent *event)
{	
	mousePoint = event->pos();//设置一个点的做表为事件点坐标
	/*mousePoint.setX(event->x());
	mousePoint.setY(event->y());*/
	
	ui.lineEdit->setText(QString("%1,%2").arg(mousePoint.x()).arg(mousePoint.y()));	
	int BrushQColor = 1;
	


}
void mydelegateself::quedingindex()
{

}
bool mydelegateself::mousePointInRect()
{

	if (rect1.contains(mousePoint))
	{

		return true;
	}
	return false;
}

//初始值        intdrawText=   1   表示画文字      BrushQColor= 1   表示画背景色     mydrawRect= 1   表示画矩形
void mydelegateself::huizhi(QPoint currentPos, int intdrawText,     int BrushQColor, int mydrawRect) 
{
	int n = 0;
	QPainter paint(this);
	
	font1 = this->font();
	QFontMetrics metrics(font1);
	int fontheight = metrics.height();

	QPoint changtextPoint(currentPos.x(), currentPos.y());
	
	int i = 0;

	for (auto ite : listdata)
	{
		ui.lineEdit_2->setText(QString("%1,n%2").arg(index).arg(n));
		ui.lineEdit_2->show();
		changtextPoint.setY(currentPos.y() + fontheight);//画字点坐标
		if (intdrawText)
		{
			paint.drawText(changtextPoint, ite);
		}
		QRect rect(currentPos.x(), currentPos.y(), 50, fontheight);
		rect1 = rect;
		
		if (BrushQColor)
		{
			paint.setBrush(QColor(0, 0, 0, 100));//设置画刷
		}
		else
		{
			paint.setBrush(QColor(0, 0, 0, 0));//设置画刷
		}
		in = mousePointInRect();
		 
		if (mydrawRect)
		{
			if (BrushQColor)
			{
				if (index == i)
				{
					paint.drawRect(rect);
				}
				i++;
			}
			else
			{

				paint.drawRect(rect);
			}
		}
		else
		{
			if (rect.contains(mousePoint))
			{
				index = n;
				return;
			}
		}
		this->update();
		currentPos.setY(currentPos.y() + fontheight);//字位坐标
		if ((intdrawText + BrushQColor + mydrawRect) == 0)
		{
			n++;
		}
	}
	
	
		ui.lineEdit_2->setText(QString("%1,n%2").arg(index).arg(n));
		ui.lineEdit_2->show();
	
}