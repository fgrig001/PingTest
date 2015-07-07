
#include "Window.h"

#include <QPushButton>
#include <QWidget>

Window::Window(QWidget *parent):
	QWidget(parent)
{
	// Set window properties	
	setWindowTitle("Ping Test");
	setFixedSize(300, 400);

	// Initialize Start Ping button
	startButton = new QPushButton("Start Ping",this);
	startButton->setGeometry(50,60,200,30);

	// Initialize Stop Ping button
	stopButton = new QPushButton("Stop Ping",this);
	stopButton->setGeometry(50,100,200,30);
}
