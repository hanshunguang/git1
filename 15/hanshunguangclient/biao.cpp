#include "biao.h"
#include <QStandardItemModel> 
biao::biao(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	/*tableView*/
	QStandardItemModel *model = new QStandardItemModel();

	model->setColumnCount(4);

	 model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("����"));
	 model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("����"));
	 model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("���"));
	 model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("����"));



	 ui.tableView->setModel(model);



	 ui.tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
	
	 ui.tableView->horizontalHeader()->sectionResizeMode(0); 
	 ui.tableView->horizontalHeader()->sectionResizeMode(1);
	 ui.tableView->horizontalHeader()->sectionResizeMode(2);
	 ui.tableView->horizontalHeader()->sectionResizeMode(3);

 

	
	 
 ui.tableView->setColumnWidth(0, 101);

	 ui.tableView->setColumnWidth(1, 102);
	 int w = 0;
	 for (int i = 0; i < 3; i++)

	 {
		 w++;
		  char buffer[20] ;
		
		 sprintf_s(buffer, 20, "%d\n", w);
		/* char arr[5] = { "aa" };
		 char brr[3][3] = { 'a', 'b', 'c', 'd', 'e' };*/
		 model->setItem(i, 0, new QStandardItem(buffer));
		 
		 //�����ַ���ɫ

		 model->item(i, 0)->setForeground(QBrush(QColor(255, 0, 0)));

		 //�����ַ�λ��

		 model->item(i, 0)->setTextAlignment(Qt::AlignCenter);

		 model->setItem(i, 1, new QStandardItem(QString::fromLocal8Bit("����")));
		 model->setItem(i, 2, new QStandardItem(QString::fromLocal8Bit("���")));
		 model->setItem(i, 3, new QStandardItem(QString::fromLocal8Bit("����")));
		 ui.tableView->setSortingEnabled(true);
		 ui.tableView->setContextMenuPolicy(Qt::CustomContextMenu);
		/*
		1> tabelview��ѡȡһ����
		ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
		2> ��ȡtableView�е�ǰ������к�
		int row = ui->tableView->currentIndex().row();
		3> ��ͷ��Ϣ��ʾ����
		ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
		4> �����п��ڼ��У���ȣ�
		ui->tableView->setColumnWidth(0,101);

		�����п�����ı��Զ�����

		ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

		5> �����п��ɱ�
		ui->tableView->horizontalHeader()->setResizeMode(0,QHeaderView::Fixed);
		6> ɾ���У�
		//x��ָ��ɾ����һ��
		model->removeRow(x);
		//ɾ��������
		model->removeRows(0,model->rowCount());
		7>  ��ȡѡ�е�Ԫ�������
		ui->tableView->currentIndex();//��ȡѡ�е�Ԫ���index
		ui->tableView->currentIndex().column();//��ǰѡ�е�Ԫ����к�
		ui->tableView->currentIndex().row();//��ǰѡ�е�Ԫ���к�
		ui->tableView->currentIndex().data();//��ǰѡ�е�Ԫ���ڵ�����
		8>  ���õ�ǰѡ�е�Ԫ�������Ϊ�ַ���123
		model->setData(ui->tableView->currentIndex(),tr("123"));
		9>  model
		model->rowCount();//��ȡmodel������
		model->columnCount();//��ȡmodel������
		model->item(row, column)->text()//��ȡ�̶�λ�õ�����
		model.setColumnCount(3); //����Ϊ3��
		model.setRowCount(4); //����Ϊ4��
		10> �����������ݲ��ɱ༭
		ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
		11> ����model������
		for(int i=0;i<model->rowCount();i++)
		{
		for(int j=0;j<model->columnCount();j++)
		{
		QMessageBox::warning(this,"",model->data(model->index(i,j)).toString());
		}
		}
		ע���ڽ��б������ʱ�����ǡ�ui->tableView->setModel(model);�� ��ǰ�����Ծ��������ں󣬷�֮�����ò�����Ч��


		12>  �����п��ɱ䶯��������ͨ������϶������п�
		ui->tableview->horizontalHeader()->setResizeMode(0, QHeaderView::Fixed);
		13>  Ĭ����ʾ��ͷ���������ò����۵Ļ������ǿ��Խ�����
		ui->tableview->verticalHeader()->hide();
		14>  ʹ���Ҽ��˵��������ø�����
		ui->tableview->setContextMenuPolicy(Qt::CustomContextMenu);
		15>  ���õ�Ԫ���ı����У�����Ϊ������ʾ
		student_model->item(0, 0)->setTextAlignment(Qt::AlignCenter);
		16>  ���õ�Ԫ���ı���ɫ������Ϊ��ɫ
		student_model->item(0, 0)->setForeground(QBrush(QColor(255, 0, 0)));

		17> �����Զ�����

		ui->tableView->setSortingEnabled(true);
		18> ���ñ�ͷ����

		ui->tableView->horizontalHeader()->hide();

		19> ���������

		ui->tableView->verticalHeader()->hide();
		*/
	 }

		   



}

biao::~biao()
{

}
