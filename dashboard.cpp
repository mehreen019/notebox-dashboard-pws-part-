#include "dashboard.h"

dashboard::dashboard(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this); 
	connect(ui.noteAdd, SIGNAL(clicked()), this, SLOT(noteAddClick()));
}

dashboard::~dashboard()
{}

int dashboard::rownumber = 1;

void dashboard::addTask()
{

}
void dashboard::addPersonalNote(string title, string date, QString t)
{
	personalNotes tempPers(title, date, t);
	personal.push_back(tempPers);
	const char* char_p = date.c_str();
	//QMessageBox::information(this, "success", char_p);
	//qDebug() << rownumber;
	addCells(title);
}

void dashboard::addCells(string t) 
{
	cell* newCell = new cell(this);
	ui.gridLayout_2->addWidget(newCell, rownumber, 0);

	newCell->setAttribute(Qt::WA_DeleteOnClose, true);
	newCell->cellNum = rownumber-1;
	newCell->setTitle(t);
	allCells.push_back(newCell);

	connect(newCell, SIGNAL(sendDeleteCellSignal(int)), this, SLOT(receiveDelete(int)));
	connect(newCell, SIGNAL(sendDisplayImage(int)), this, SLOT(receiveDisplayImage(int)));

	rownumber++;

}

void dashboard::receiveDelete(int num) {
	for (int i = 0; i < allCells.size(); i++) {
		if (i == num) {
			
		}
	}
}

void dashboard::receiveDisplayImage(int num) {
	for (int i = 0; i < personal.size(); i++) {
		if (i == num) {
			//QMessageBox::information(this, "success", "pic received");
			img = new image(this);
			img->finallyImageOutput(personal[i].getFile());
		}
	}

}

void dashboard::addSclNote(string Cat, string Topic, string sub, string title, string date, QString tf)
{
	schoolNotes tempscl(Cat, Topic, sub, title, date, tf);
	sclNotes.push_back(tempscl);
	//QMessageBox::information(this, "success", "info loaded");
}

void dashboard::noteAddClick() {
	
	b = new button(this);
	b->show();
	
}

void dashboard::submitFile() {
	QString picpath = QFileDialog::getOpenFileName(
		this, "Open file", "C://", "JPG file(*.jpg)::PNG file(*.png)"
	);



	//std::string p = picpath.toLocal8Bit().constData();
	//const char* char_p = p.c_str();
	//QMessageBox::information(this, "runs", picpath);

	//tf = fopen(char_p, "r");
	tf = picpath;
	

	if (tf==QString::null) {
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
