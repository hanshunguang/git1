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
	QPoint currentNoTextPos(150, 50);
	QPoint currentNoTextPos1(250, 50);
	currentNoTextPos = currentDrawTextPos;

	

	huizhi(jieshouPoint, zhuangTai1);
	huizhi(currentDrawTextPos, zhuangTai3);
	huizhi(currentNoTextPos, zhuangTai2);
	huizhi(currentNoTextPos1, zhuangTai4);



	//int intdrawText = 1; //1表示画文字
	//huizhi(jieshouPoint, 0, 0, 0);
	//
	//huizhi(currentDrawTextPos, intdrawText,0,1);

	//intdrawText = 0;//1表示不画文字
	//huizhi(currentNoTextPos, intdrawText, 1, 1);
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
void mydelegateself::huizhi(QPoint currentPos, MyStruct zhuangTai) //int intdrawText, int BrushQColor, int mydrawRect
{
	if (zhuangTai == zhuangTai3)
	{
		 n = 0;
	}
	QPainter paint(this);
	
	font1 = this->font();
	QFontMetrics metrics(font1);
	int fontheight = metrics.height();

	QPoint changtextPoint(currentPos.x(), currentPos.y());
	
	int i = 0;

	for (auto ite : listdata)
	{
		if (zhuangTai == zhuangTai2)
		{
			if (index == i)
			{
				//paint.setBrush(QColor(0, 0, 0, 100));//设置画刷
				zhuangTai = zhuangTai4;
			}
			else
			{
				if (index < i)
				{
					/*zhuangTai = zhuangTai3;*/

					return;
				}
				else
				{
					zhuangTai = zhuangTai2;


				}
		    }
		  i++;
		  ui.lineEdit_3->setText(QString("%1").arg(i));
		}
		else
		{
			if ((zhuangTai == zhuangTai4))
			{
				return;
			}

		}
			
		ui.lineEdit_2->setText(QString("%1,n%2").arg(index).arg(n));
		ui.lineEdit_2->show();
		changtextPoint.setY(currentPos.y() + fontheight);//画字点坐标


		if (zhuangTai.intdrawText)
		{
			paint.drawText(changtextPoint, ite);
		}
		QRect rect(currentPos.x(), currentPos.y(), 50, fontheight);
		rect1 = rect;
		
		if (zhuangTai.BrushQColor)
		{
			paint.setBrush(QColor(0, 0, 0, 100));//设置画刷
		}
		else
		{
			
			paint.setBrush(QColor(0, 0, 0, 0));//设置画刷
		}
		in = mousePointInRect();
		 
		if (zhuangTai.mydrawRect)
		{
			/*if (BrushQColor)
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
			}*/
			paint.drawRect(rect);
		}
		/*else
		{
		if (rect.contains(mousePoint))
		{
		index = n;
		return;
		}
		}*/
	
	
		if (zhuangTai == zhuangTai3)
		{
			if (rect.contains(mousePoint))
			{
				pointInRect = true;
				index = n;
				return;
			}
			n++;
			index = -1;
			pointInRect = false;
		}
		this->update();
		currentPos.setY(currentPos.y() + fontheight);//字位坐标
		
		
	}
	
	
		ui.lineEdit_2->setText(QString("%1,n%2").arg(index).arg(n));
		ui.lineEdit_2->show();
	
}

void mydelegateself::mouseDoubleClickEvent(QMouseEvent *event)
{
	if (pointInRect)
	{
		if (ledit == nullptr||ledit->isHidden())
		{

			ledit = new QLineEdit(this);
			ledit->setObjectName(QStringLiteral("ledit"));
			
			int x,y,w,h;
			
			x = jieshouPoint.x();
			y = jieshouPoint.y() + index*rect1.height();
			QRect myeditRect(x, y, rect1.width(), rect1.height());
			ledit->setGeometry(myeditRect);
			ledit->setText(listdata[index]);
		}
		else
		{

		}

		ledit->show();		//显示lEdit
		
	}
	else
	{
		if (ledit!= nullptr)
		{
			ledit->setHidden(true);//隐藏lEdit
		}
		
	}
	this->update();
	this->show();
}
void mydelegateself::keyPressEvent(QKeyEvent *event)
{
	if (ledit != nullptr&&!ledit->isHidden() && index!=-1)
	{
		ledit->hide();
		str = ledit->text();

		listdata[index] = str;
		this->update();
		/*
		lEdit->hide();
		QString str =  lEdit->text();//把编辑的文字储存在字符串str中
		listData[editIndex] = str;//把字符串str储存在listData中
		this->update();
		*/
		
	}
	
}