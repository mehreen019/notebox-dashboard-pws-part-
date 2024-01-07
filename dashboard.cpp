#include "dashboard.h"

dashboard::dashboard(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this); 
	connect(ui.noteAdd, SIGNAL(clicked()), this, SLOT(noteAddClick()));
}

dashboard::~dashboard()
{}

void dashboard::addTask()
{

}
void dashboard::addPersonalNote(string title, string date, FILE* t)
{
	personalNotes tempPers(title, date, t);
	personal.push_back(tempPers);
	const char* char_p = date.c_str();
	QMessageBox::information(this, "success", char_p);
	//qDebug() << "ok";
	
}
void dashboard::addSclNote(string Cat, string Topic, string sub, string title, string date, FILE* tf)
{
	schoolNotes tempscl(Cat, Topic, sub, title, date, tf);
	sclNotes.push_back(tempscl);
	QMessageBox::information(this, "success", "info loaded");
}

void dashboard::noteAddClick() {
	
	b = new button(this);
	b->show();
	
}

void dashboard::submitFile() {
	QString picpath = QFileDialog::getOpenFileName(
		this, "Open file", "C://", "JPG file(*.jpg)::PNG file(*.png)"
	);



	std::string p = picpath.toLocal8Bit().constData();
	const char* char_p = p.c_str();
	//QMessageBox::information(this, "runs", picpath);

	tf = fopen(char_p, "r");
	

	if (!tf) {
		//QMessageBox::information(this, "failed", "pic has not been loaded");
	}
}

void dashboard::submitSclNoteInfo() {
	//QMessageBox::information(this, "success", "info loaded");
	QString title = b->ui.lineEdit_title->text();
	QString date = b->ui.lineEdit_date->text();

	std::string mt = title.toLocal8Bit().constData();
	//note.Settitle(mt);

	std::string md = date.toLocal8Bit().constData();
	//note.Setdate(md);

	addPersonalNote(mt, md, tf);

	b->close();
}

void dashboard::addReminder()
{

}
void dashboard::addDeadline()
{

}
void dashboard::display()
{

}
