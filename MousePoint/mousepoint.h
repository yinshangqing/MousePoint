#ifndef MOUSEPOINT_H
#define MOUSEPOINT_H

#include <QtWidgets/QMainWindow>
#include "ui_mousepoint.h"

class MousePoint : public QMainWindow
{
	Q_OBJECT

public:
	MousePoint(QWidget *parent = 0);
	~MousePoint();

private:
	Ui::MousePointClass ui;
};

#endif // MOUSEPOINT_H
