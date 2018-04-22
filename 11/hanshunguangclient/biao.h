#ifndef BIAO_H
#define BIAO_H

#include <QWidget>
#include "ui_biao.h"

class biao : public QWidget
{
	Q_OBJECT

public:
	biao(QWidget *parent = 0);
	~biao();

private:
	Ui::biao ui;
};

#endif // BIAO_H
