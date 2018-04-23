#include "hanshunguangclient.h"
#include <QMovie> 


hanshunguangclient::hanshunguangclient(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	ui.comboBox->addItem(tr("Circle"));
	ui.comboBox_2->addItem(tr("2018.0.1"));
	ui.comboBox_2->addItem(tr("2018.0.2"));
	ui.comboBox_3->addItem(tr("hanshunguangclient"));
	ui.lineEdit_2->setText(tr("888"));
	ui.lineEdit->setText(tr("123456"));
	/*ui.keySequenceEdit->setText(tr("hhh"));*/
	//------------------------------------动画
	//Movie movie("racecar.gif");
	//movie.setSpeed(200); // 2x speed 

	QMovie *movie = new QMovie("animations/fire.gif");
	ui.label_8->setMovie(movie);
	m_thread = new mythread(this);//扫描的线程申请模板
	m_thread->SetPath("D:/123");//扫描的路径设置模板
	
		movie->start();
		//按钮pushButton_6接当前窗口并让textEdit_2显示文件名------
		connect(m_thread, &mythread::signal_myzhongzhuan_1, this, &hanshunguangclient::signal_myzhongzhuan1);//扫描的线程与中转信号连接模板
		connect(ui.pushButton_6, &QPushButton::released, this, &hanshunguangclient::slot_myzhongzhuan1);//扫描的按键与中转槽连接模板
		
		connect(this, &hanshunguangclient::signal_myzhongzhuan1, this, &hanshunguangclient::slot_click1);//扫描的中转信号与处理槽连接模板
		
		//参数不同时中转-----------------------------------------------
		connect(ui.pushButton_5, &QPushButton::released, this, &hanshunguangclient::slot_myzhongzhuan);//参数不同时中转信号槽模板
		connect(this, &hanshunguangclient::signal_myzhongzhuan, this, &hanshunguangclient::slot_click);//参数不同时中转信号槽模板
		//参数不同时中转-----------------------------------------------
	QMovie *Movie = new QMovie("movie/fire.gif");
	Movie->setSpeed(1000);
	Movie->setBackgroundColor(QColor(123, 165, 67));
	/* QLabel  *Label = new QLabel();*/

	ui.label_9->setMovie(Movie);
	ui.label_9->show();
	Movie->start();
	
	

	//------------------------------------动画
	
	connect(ui.pushButton, &QPushButton::clicked, this, &hanshunguangclient::slot_btnClicked);

	
	
}
/*
一、添加表头：
QStandardItemModel *model = new QStandardItemModel();

2. model->setColumnCount(2);

3. model->setHeaderData(0,Qt::Horizontal,QString::fromLocal8Bit("卡号"));

4. model->setHeaderData(1,Qt::Horizontal,QString::fromLocal8Bit("姓名"));
二、设置表格属性：


1. ui->tableView->setModel(model);

2. //表头信息显示居左

3. ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);

4. //设置列宽不可变

5. ui->tableView->horizontalHeader()->setResizeMode(0,QHeaderView::Fixed);

6. ui->tableView->horizontalHeader()->setResizeMode(1,QHeaderView::Fixed);

7. ui->tableView->setColumnWidth(0,101);

8. ui->tableView->setColumnWidth(1,102);
三、添加行（添加三行一样的信息）：


1.  for(int i = 0; i < 3; i++)

2.  {

3.      model->setItem(i,0,new QStandardItem("2009441676"));

4.         //设置字符颜色

5.      model->item(i,0)->setForeground(QBrush(QColor(255, 0, 0)));

6.         //设置字符位置

7.      model->item(i,0)->setTextAlignment(Qt::AlignCenter);

8.      model->setItem(i,1,new QStandardItem(QString::fromLocal8Bit("哈哈")));

9.  }
四、删除行：


1. //x是指定删除哪一行

2. model->removeRow(x);

3. //删除所有行

4. model->removeRows(0,model->rowCount());


*/
void hanshunguangclient::slot_btnClicked(bool  Checked)
{
	ui.comboBox->addItem(tr("Circle"));
	ui.comboBox->show();
	//------------------------------------------在combox
	//QComboBox *  m_combox;
	//
	//m_combox = new QComboBox(this);
	//ui.comboBox = m_combox;
	//
	//QStringList test = QStringList()

	//	<< "111"

	//	<< "222";

	//m_combox->addItems(test);

	/*m_combox->show();*/

	//--------------------------------------------


}
hanshunguangclient::~hanshunguangclient()
{

}


void hanshunguangclient::slot_myzhongzhuan()//参数不同时中转信号槽模板
{
	emit hanshunguangclient::signal_myzhongzhuan(tr("Circle"));//参数不同时中转信号槽模板
}
void hanshunguangclient::slot_myzhongzhuan1()
{
	/*emit hanshunguangclient::signal_myzhongzhuan1(tr("Circle"));*/
	m_thread->start();
}
void hanshunguangclient::slot_click(QString dirlist)//参数不同时中转信号槽模板
{
	ui.textEdit->append(tr("Circle"));
}
void hanshunguangclient::slot_click1(QString dirlist, bool clear)//扫描的处理槽模板 参数不同时中转信号槽模板 bool clear放在信号中用于传递类和类之间的控制
{
	if (clear)//bool clear放在信号中用于传递类和类之间的控制
	{
		ui.textEdit_2->clear();
		return;
	}
	//for (auto ite : dirlist)//这里不明白
	//		{
	
	ui.textEdit_2->append(dirlist);
	/*	}*/

}