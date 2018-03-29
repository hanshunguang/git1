#include "hanshunguang.h"
#include <QtWidgets/QApplication>
#include "biao.h"
#include "filereadwrite.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	filereadwrite w;
	w.show();
	return a.exec();
}
