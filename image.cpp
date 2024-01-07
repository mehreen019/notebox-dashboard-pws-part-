#include "image.h"

image::image(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

image::~image()
{}

void image::finallyImageOutput(QString fp) {
	//QMessageBox::information(this, "success", "pic received");
	QPixmap pix(fp);
	//ui.picLabel->setPixmap(pix.scaled(500,500,Qt::KeepAspectRatio));
	ui.picLabel->setPixmap(pix);
	ui.picLabel->setScaledContents(true);
	this->show();
}
