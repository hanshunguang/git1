#ifndef QQTHREAD_H
#define QQTHREAD_H

#include <QThread>

class qqThread : public QThread
{
	Q_OBJECT

public:
	qqThread(QObject *parent);
	~qqThread();
protected:
	void run();
private:
	
};

#endif // QQTHREAD_H
