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



	//int intdrawText = 1; //1��ʾ������
	//huizhi(jieshouPoint, 0, 0, 0);
	//
	//huizhi(currentDrawTextPos, intdrawText,0,1);

	//intdrawText = 0;//1��ʾ��������
	//huizhi(currentNoTextPos, intdrawText, 1, 1);
}
void mydelegateself::mouseMoveEvent(QMouseEvent *event)
{	
	mousePoint = event->pos();//����һ���������Ϊ�¼�������
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


//��ʼֵ        intdrawText=   1   ��ʾ������      BrushQColor= 1   ��ʾ������ɫ     mydrawRect= 1   ��ʾ������
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
				//paint.setBrush(QColor(0, 0, 0, 100));//���û�ˢ
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
		changtextPoint.setY(currentPos.y() + fontheight);//���ֵ�����


		if (zhuangTai.intdrawText)
		{
			paint.drawText(changtextPoint, ite);
		}
		QRect rect(currentPos.x(), currentPos.y(), 50, fontheight);
		rect1 = rect;
		
		if (zhuangTai.BrushQColor)
		{
			paint.setBrush(QColor(0, 0, 0, 100));//���û�ˢ
		}
		else
		{
			
			paint.setBrush(QColor(0, 0, 0, 0));//���û�ˢ
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
		currentPos.setY(currentPos.y() + fontheight);//��λ����
		
		
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

		ledit->show();		//��ʾlEdit
		
	}
	else
	{
		if (ledit!= nullptr)
		{
			ledit->setHidden(true);//����lEdit
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
		QString str =  lEdit->text();//�ѱ༭�����ִ������ַ���str��
		listData[editIndex] = str;//���ַ���str������listData��
		this->update();
		*/
		
	}
	
}