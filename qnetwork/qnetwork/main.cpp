#include "qnetwork.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qnetwork w;
	w.show();
	return a.exec();
}
