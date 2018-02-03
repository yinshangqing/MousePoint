#include "mousepoint.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MousePoint w;
	w.show();
	return a.exec();
}
