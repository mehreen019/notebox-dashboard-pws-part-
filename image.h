#pragma once

#include <QMainWindow>
#include "ui_image.h"
#include "Header.h"

class image : public QMainWindow
{
	Q_OBJECT

public:
	image(QWidget *parent = nullptr);
	~image();
	void finallyImageOutput(QString);

private:
	Ui::imageClass ui;
};
