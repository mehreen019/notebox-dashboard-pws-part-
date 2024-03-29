#include "cell.h"

cell::cell(QWidget *parent)
	: QMainWindow(parent), cellNum(0), unique(0)
{
	ui.setupUi(this);
	connect(ui.deleteTask, SIGNAL(clicked()), this, SLOT(onDeleteClick()));
	connect(ui.displayImage, SIGNAL(clicked()), this, SLOT(onDisplayClick()));
	connect(ui.upload, SIGNAL(clicked()), this, SLOT(onUploadClick()));
}

cell::~cell()
{}

void cell::setTitle(std::string t)
{
	QString qstr = QString::fromStdString(t);
	ui.titlePlace->setText(qstr);
}

void cell::onDeleteClick() {
	QMessageBox::StandardButton reply;
	reply = QMessageBox::question(this, "delete confirmation", "are you sure you want to delete?", QMessageBox::Yes | QMessageBox::No);
	if (reply == QMessageBox::Yes) {
		emit sendDeleteCellSignal(unique);
		this->close();
	}
}

void cell::onUploadClick() {
	emit sendUploadClick(cellNum);
}

void cell::onDisplayClick() {
	emit sendDisplayImage(cellNum);
}