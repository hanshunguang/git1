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
	//------------------------------------����
	//Movie movie("racecar.gif");
	//movie.setSpeed(200); // 2x speed 

	QMovie *movie = new QMovie("animations/fire.gif");
	ui.label_8->setMovie(movie);
	m_thread = new mythread(this);//ɨ����߳�����ģ��
	m_thread->SetPath("D:/123");//ɨ���·������ģ��
	
		movie->start();
		//��ťpushButton_6�ӵ�ǰ���ڲ���textEdit_2��ʾ�ļ���------
		connect(m_thread, &mythread::signal_myzhongzhuan_1, this, &hanshunguangclient::signal_myzhongzhuan1);//ɨ����߳�����ת�ź�����ģ��
		connect(ui.pushButton_6, &QPushButton::released, this, &hanshunguangclient::slot_myzhongzhuan1);//ɨ��İ�������ת������ģ��
		
		connect(this, &hanshunguangclient::signal_myzhongzhuan1, this, &hanshunguangclient::slot_click1);//ɨ�����ת�ź��봦�������ģ��
		
		//������ͬʱ��ת-----------------------------------------------
		connect(ui.pushButton_5, &QPushButton::released, this, &hanshunguangclient::slot_myzhongzhuan);//������ͬʱ��ת�źŲ�ģ��
		connect(this, &hanshunguangclient::signal_myzhongzhuan, this, &hanshunguangclient::slot_click);//������ͬʱ��ת�źŲ�ģ��
		//������ͬʱ��ת-----------------------------------------------
	QMovie *Movie = new QMovie("movie/fire.gif");
	Movie->setSpeed(1000);
	Movie->setBackgroundColor(QColor(123, 165, 67));
	/* QLabel  *Label = new QLabel();*/

	ui.label_9->setMovie(Movie);
	ui.label_9->show();
	Movie->start();
	
	

	//------------------------------------����
	
	connect(ui.pushButton, &QPushButton::clicked, this, &hanshunguangclient::slot_btnClicked);

	
	
}
/*
һ����ӱ�ͷ��
QStandardItemModel *model = new QStandardItemModel();

2. model->setColumnCount(2);

3. model->setHeaderData(0,Qt::Horizontal,QString::fromLocal8Bit("����"));

4. model->setHeaderData(1,Qt::Horizontal,QString::fromLocal8Bit("����"));
�������ñ�����ԣ�


1. ui->tableView->setModel(model);

2. //��ͷ��Ϣ��ʾ����

3. ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);

4. //�����п��ɱ�

5. ui->tableView->horizontalHeader()->setResizeMode(0,QHeaderView::Fixed);

6. ui->tableView->horizontalHeader()->setResizeMode(1,QHeaderView::Fixed);

7. ui->tableView->setColumnWidth(0,101);

8. ui->tableView->setColumnWidth(1,102);
��������У��������һ������Ϣ����


1.  for(int i = 0; i < 3; i++)

2.  {

3.      model->setItem(i,0,new QStandardItem("2009441676"));

4.         //�����ַ���ɫ

5.      model->item(i,0)->setForeground(QBrush(QColor(255, 0, 0)));

6.         //�����ַ�λ��

7.      model->item(i,0)->setTextAlignment(Qt::AlignCenter);

8.      model->setItem(i,1,new QStandardItem(QString::fromLocal8Bit("����")));

9.  }
�ġ�ɾ���У�


1. //x��ָ��ɾ����һ��

2. model->removeRow(x);

3. //ɾ��������

4. model->removeRows(0,model->rowCount());


*/
void hanshunguangclient::slot_btnClicked(bool  Checked)
{
	ui.comboBox->addItem(tr("Circle"));
	ui.comboBox->show();
	//------------------------------------------��combox
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


void hanshunguangclient::slot_myzhongzhuan()//������ͬʱ��ת�źŲ�ģ��
{
	emit hanshunguangclient::signal_myzhongzhuan(tr("Circle"));//������ͬʱ��ת�źŲ�ģ��
}
void hanshunguangclient::slot_myzhongzhuan1()
{
	/*emit hanshunguangclient::signal_myzhongzhuan1(tr("Circle"));*/
	m_thread->start();
}
void hanshunguangclient::slot_click(QString dirlist)//������ͬʱ��ת�źŲ�ģ��
{
	ui.textEdit->append(tr("Circle"));
}
void hanshunguangclient::slot_click1(QString dirlist, bool clear)//ɨ��Ĵ����ģ�� ������ͬʱ��ת�źŲ�ģ�� bool clear�����ź������ڴ��������֮��Ŀ���
{
	if (clear)//bool clear�����ź������ڴ��������֮��Ŀ���
	{
		ui.textEdit_2->clear();
		return;
	}
	//for (auto ite : dirlist)//���ﲻ����
	//		{
	
	ui.textEdit_2->append(dirlist);
	/*	}*/

}