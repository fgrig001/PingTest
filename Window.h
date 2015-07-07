#ifndef _WINDOW_H
#define _WINDOW_H

#include <QWidget>
#include <QPushButton>

class Window : public QWidget{
	public:
		explicit Window(QWidget *parent=0);
	private:
		QPushButton *startButton;
		QPushButton *stopButton;

};

#endif // _WINDOW_H
