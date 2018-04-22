#include "biao.h"
#include <QStandardItemModel> 
biao::biao(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	/*tableView*/
	QStandardItemModel *model = new QStandardItemModel();

	model->setColumnCount(4);

	 model->setHeaderData(0, Qt::Horizontal, QString::fromLocal8Bit("卡号"));
	 model->setHeaderData(1, Qt::Horizontal, QString::fromLocal8Bit("姓名"));
	 model->setHeaderData(2, Qt::Horizontal, QString::fromLocal8Bit("界别"));
	 model->setHeaderData(3, Qt::Horizontal, QString::fromLocal8Bit("荣誉"));



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
		 
		 //设置字符颜色

		 model->item(i, 0)->setForeground(QBrush(QColor(255, 0, 0)));

		 //设置字符位置

		 model->item(i, 0)->setTextAlignment(Qt::AlignCenter);

		 model->setItem(i, 1, new QStandardItem(QString::fromLocal8Bit("哈哈")));
		 model->setItem(i, 2, new QStandardItem(QString::fromLocal8Bit("打打")));
		 model->setItem(i, 3, new QStandardItem(QString::fromLocal8Bit("懂个")));
		 ui.tableView->setSortingEnabled(true);
		 ui.tableView->setContextMenuPolicy(Qt::CustomContextMenu);
		/*
		1> tabelview中选取一整行
		ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
		2> 获取tableView中当前点击的行号
		int row = ui->tableView->currentIndex().row();
		3> 表头信息显示居左
		ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
		4> 设置列宽（第几列，宽度）
		ui->tableView->setColumnWidth(0,101);

		设置列宽根据文本自动调节

		ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

		5> 设置列宽不可变
		ui->tableView->horizontalHeader()->setResizeMode(0,QHeaderView::Fixed);
		6> 删除行：
		//x是指定删除哪一行
		model->removeRow(x);
		//删除所有行
		model->removeRows(0,model->rowCount());
		7>  获取选中单元格的属性
		ui->tableView->currentIndex();//获取选中单元格的index
		ui->tableView->currentIndex().column();//当前选中单元格的列号
		ui->tableView->currentIndex().row();//当前选中单元格行号
		ui->tableView->currentIndex().data();//当前选中单元格内的数据
		8>  设置当前选中单元格的数据为字符串123
		model->setData(ui->tableView->currentIndex(),tr("123"));
		9>  model
		model->rowCount();//获取model的行数
		model->columnCount();//获取model的列数
		model->item(row, column)->text()//获取固定位置的数据
		model.setColumnCount(3); //设置为3列
		model.setRowCount(4); //设置为4行
		10> 设置行内数据不可编辑
		ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
		11> 变量model中数据
		for(int i=0;i<model->rowCount();i++)
		{
		for(int j=0;j<model->columnCount();j++)
		{
		QMessageBox::warning(this,"",model->data(model->index(i,j)).toString());
		}
		}
		注：在进行表格设置时必须是“ui->tableView->setModel(model);” 在前，属性具体设置在后，反之则设置不会生效。


		12>  设置列宽不可变动，即不能通过鼠标拖动增加列宽
		ui->tableview->horizontalHeader()->setResizeMode(0, QHeaderView::Fixed);
		13>  默认显示行头，如果你觉得不美观的话，我们可以将隐藏
		ui->tableview->verticalHeader()->hide();
		14>  使用右键菜单，需启用该属性
		ui->tableview->setContextMenuPolicy(Qt::CustomContextMenu);
		15>  设置单元格文本居中，设置为居中显示
		student_model->item(0, 0)->setTextAlignment(Qt::AlignCenter);
		16>  设置单元格文本颜色，设置为红色
		student_model->item(0, 0)->setForeground(QBrush(QColor(255, 0, 0)));

		17> 设置自动排列

		ui->tableView->setSortingEnabled(true);
		18> 设置表头隐藏

		ui->tableView->horizontalHeader()->hide();

		19> 隐藏行序号

		ui->tableView->verticalHeader()->hide();
		*/
	 }

		   



}

biao::~biao()
{

}
