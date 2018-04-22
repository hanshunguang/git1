#include "hanshunguangclient.h"
#include <QtWidgets/QApplication>
#include "biao.h"
#include "filereadwrite.h"
#include "filefolderread.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv); QTextCodec *textCode = QTextCodec::codecForLocale();
	

	
	filefolderread w;
	w.show();
	return a.exec();
}
