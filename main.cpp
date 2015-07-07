
#include <QApplication>
#include "Window.h"

int main(int argc, char *argv[ ]){
	QApplication app(argc, argv);
	
	// Show window
	Window window;
	window.show();
	return app.exec();
}

