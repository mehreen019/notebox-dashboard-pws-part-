#include "dashboard.h"
#define filepath "E:\\coding\\projects\\QtWidgetsApplication1\\userInfo.txt"

dashboard::dashboard(QWidget *parent)
	: QMainWindow(parent), rownumber(0), feduprow(0), b(NULL), img(NULL)
{
	ui.setupUi(this); 
	connect(ui.noteAdd, SIGNAL(clicked()), this, SLOT(noteAddClick()));
	connect(this, SIGNAL(crossClicked()), this, SLOT(handleClose()));
}

dashboard::~dashboard()
{
	for (int j = 0; j < rownumber; j++)
	{
		delete allNotes[j];
	}
}


void dashboard::addTask()
{

}
void dashboard::addPersonalNote(string title, string date)
{
	const char* neww = (const char*)malloc((tf.size() + 1)* sizeof(char)); // Allocate 1 more char
	neww = tf.c_str();          // Correct number of bytes to copy
	//personalNotes tempPers(title, date, tf);
	int r = rand();
	allNotes[rownumber] = new personalNotes(title, date, tf, r);
	const char* char_p = date.c_str();
	QMessageBox::information(this, "success", neww);
	//qDebug() << rownumber;
	addCells(allNotes[rownumber]->Gettitle(), r);
	string n=display(0);
}

string dashboard::display(int num) {
	return allNotes[num]->getFile();
}

void dashboard::addOnLoad() {
	readFromFile();
	char q[10];
	sprintf(q, "%d", rownumber);
	QMessageBox::information(this, "success", q);
	feduprow = 1;
	/*for (int i = 0; i < rownumber; i++) {
		//QString qstr = QString::fromStdString();
		addCells(allNotes[i]->getFile());
	}*/
}

void dashboard::handleClose() {
	
	writeToFile();
	//this->close();
	QMessageBox::information(this, "success", "written to file");
	QCoreApplication::quit();
	//QCloseEvent::QCloseEvent();
}

void dashboard::addCells(string t, int r) 
{
	//if (feduprow == 0) feduprow++;
	cell* newCell = new cell(this);
	ui.gridLayout_2->addWidget(newCell, rownumber+1, 0);

	newCell->setAttribute(Qt::WA_DeleteOnClose, true);
	newCell->cellNum = rownumber;
	newCell->unique = r;
	newCell->setTitle(t);
	allCells.push_back(newCell);

	connect(newCell, SIGNAL(sendDeleteCellSignal(int)), this, SLOT(receiveDelete(int)));
	connect(newCell, SIGNAL(sendDisplayImage(int)), this, SLOT(receiveDisplayImage(int)));

	rownumber++;
	//feduprow++;
}



void dashboard::receiveDelete(int num) {
	for (int i = 0; i < rownumber; i++) {
		if (allNotes[i]->getUnique() == num) {
			allCells[i]->close();
			for (int j = i; j < rownumber; j++) {
				if (j + 1 == rownumber) break;

				allNotes[j] = allNotes[j + 1];
				allCells[j] = allCells[j + 1];
			}
			rownumber--;
			break;
		}
	}
}

void dashboard::bufferimg() {
	QMessageBox::information(this, "success", "ok");
	QMessageBox::information(this, "success", allNotes[0]->Gettitle().c_str());
}

void dashboard::receiveDisplayImage(int num) {
	char q[10];
	sprintf(q, "%d", num);
	string kk = allNotes[num]->getFile();
	//bufferimg();
	//for (int i = 0; i < rownumber; i++) {
		//if (i == num) {
			//p_type ptype = allNotes[i]->get_type();
			//
			img = new image(this);

			QMessageBox::information(this, "success", kk.c_str());
			//string ft = allNotes[i]->getFile();
			//string ft = allNotes[i]->fp;
			//QMessageBox::information(this, "success", "pic received");
			img->finallyImageOutput(kk.c_str());
			//break;
		//}
	//}
}

void dashboard::addSclNote(string Cat, string Topic, string sub, string title, string date, string tf)
{
	int r = rand();
	allNotes[rownumber]= new schoolNotes(Cat, Topic, sub, title, date, tf, r);
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

	string p = picpath.toLocal8Bit().constData();
	tf = p;
	//char* ff;
	//strcpy(tf, p.c_str());
	//QMessageBox::information(this, "runs", tf);

	//tf = fopen(char_p, "r");
	

	/*if (tf == "") {
		QMessageBox::information(this, "failed", "pic has not been loaded");
	}*/
}

void dashboard::submitSclNoteInfo() {
	//QMessageBox::information(this, "success", "info loaded");
	QString title = b->ui.lineEdit_title->text();
	QString date = b->ui.lineEdit_date->text();

	std::string mt = title.toLocal8Bit().constData();
	//note.Settitle(mt);

	std::string md = date.toLocal8Bit().constData();
	//note.Setdate(md);
	
	//QMessageBox::information(this, "runs", tf);
	addPersonalNote(mt, md);

	b->close();
}

void dashboard::addReminder()
{

}
void dashboard::addDeadline()
{

}

void dashboard::readFromFile() {
	int size;
	string ptype;
	ifstream inf;
	inf.open(filepath, ios::in);
	if (!inf)
	{
		QMessageBox::information(this, "failed", "couldn't read info");
		return;
	}
	rownumber = 0;
	while (true)
	{
		/*inf.read((char*)&ptype, sizeof(ptype));
		if (inf.eof()) { cout << rownumber <<endl; break; }
		if (!inf)
		{
			QMessageBox::information(this, "failed", "couldn't read info");
			return;
		}
		switch (ptype)
		{
		case sclN:
			allNotes[rownumber] = new schoolNotes;
			size = sizeof(schoolNotes);
			break;
		case persN:
			allNotes[rownumber] = new personalNotes;
			size = sizeof(personalNotes);
			break;
		default: QMessageBox::information(this, "failed", "unknown class type");
		}
		inf.read((char*)allNotes[rownumber], size);
		if (!inf)
		{
			QMessageBox::information(this, "failed", "couldn't read info");
			return;
		}
		QMessageBox::information(this, "success", "cell loaded");*/
		if (inf.eof()) { cout << rownumber << " end of file" << endl; break; }
		inf >> ptype;
		if (!inf)
		{
			cout << "can't open file2" << endl;
			return;
		}
		if (ptype == "sclN") {
			allNotes[rownumber] = new schoolNotes();
			size = sizeof(schoolNotes);
		}
		else if (ptype == "persN") {
			allNotes[rownumber] = new personalNotes();
			size = sizeof(personalNotes);
			cout << "type detected" << endl;
		}
		else cout << "unknown class type" << endl;

		allNotes[rownumber]->deserialize(inf);

		string t = allNotes[rownumber]->Gettitle();
		int unique = allNotes[rownumber]->getUnique();
		addCells(t, unique);
		//cout << allNotes[rownumber]->Getdate() << " " << allNotes[rownumber]->getFile() << "printed from read" << endl;
		//rownumber++;
	}
	inf.close();
}

void dashboard::writeToFile() {

	int size;
	ofstream ouf;
	string ptype;
	ouf.open(filepath, ios::binary);
	if (!ouf)
	{
		//qDebug() << "\nCan't open file\n"; return;
		QMessageBox::information(this, "failed", "couldn't write info");
		return;
	}
	for (int j = 0; j < rownumber; j++)
	{
		/*if (typeid(*allNotes[j]) == typeid(schoolNotes)) {
			ptype = sclN;
		}
		else {
			ptype = persN;
		}*/
		//ptype = allNotes[j]->get_type();
		/*ptype = sclN;
		QMessageBox::information(this, "success", "cross clicked");
		ouf.write((char*)&ptype, sizeof(ptype));

		switch (ptype)
		{
		case sclN: size = sizeof(schoolNotes); break;
		case persN: size = sizeof(personalNotes); break;
		}
		ouf.write((char*)(allNotes[j]), size);
		if (!ouf)
		{
			//cout << "\nCan�t write to file\n"; return;
			QMessageBox::information(this, "failed", "couldn't read info");
			return;
		}*/
		ptype = allNotes[j]->get_type();
		ouf << ptype << " ";
		allNotes[j]->serialize(ouf);
		if (!ouf)
		{
			QMessageBox::information(this, "failed", "couldn't read info");
			return;
		}

	}
	ouf.close();
	/*int size;
	int arrSize;
	bool isScl=false;
	ofstream ouf;
	p_type ptype = num;

	switch (ptype)
	{
	case sclN:
		size = sizeof(schoolNotes);
		arrSize = sclNotes.size();
		isScl = true;
		break;
	case persN:
		size = sizeof(personalNotes);
		arrSize = personal.size();
		isScl = false;
		break;
	}
	ouf.open(filepath, ios::trunc | ios::binary);
	if (!ouf)
	{
		qDebug() << "\nCan't open file\n"; return;
	}

	for (int j = 0; j < arrSize; j++)
	{
		ouf.write((char*)&ptype, sizeof(ptype));
		if (isScl)
		{
			ouf.write((char*)(sclNotes[j]), size);
		}
		else
		{
			ouf.write((char*)(personal[j]), size);
		}
		
		if (!ouf)
		{
			qDebug() << "\nCan't write to file\n"; return;
		}
	}*/

}

