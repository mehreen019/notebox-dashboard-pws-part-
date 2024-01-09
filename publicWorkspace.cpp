#include "publicWorkspace.h"
#define filepath "E:\\coding\\projects\\QtWidgetsApplication1\\WSinfo.txt"

publicWorkspace::publicWorkspace(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.toDash, SIGNAL(clicked()), this, SLOT(onToDashClick()));
	connect(this, SIGNAL(crossClicked()), this, SLOT(handleClose()));
}

int publicWorkspace::pubNoteNum = 0;
notes* publicWorkspace::pubNotes[1000];

publicWorkspace::~publicWorkspace()
{}

/*void publicWorkspace::uploadFile()
{

}*/
void publicWorkspace::handleClose() {

	publicWorkspace::writeToFile();
	//this->close();
	QMessageBox::information(this, "success", "written to file");
	QCoreApplication::quit();
	//QCloseEvent::QCloseEvent();
}

void publicWorkspace::addCells(string t, int r) {
	QMessageBox::information(this, "success", "reached to upload");
	wsCell* newCell = new wsCell(this);
	ui.gridLayout_2->addWidget(newCell, pubNoteNum + 1, 0);

	newCell->setAttribute(Qt::WA_DeleteOnClose, true);
	newCell->cellNum = pubNoteNum;
	newCell->unique = r;
	newCell->setTitle(t);
	allCells.push_back(newCell);

	connect(newCell, SIGNAL(sendDeleteCellSignal(int)), this, SLOT(receiveDelete(int)));
	connect(newCell, SIGNAL(sendDisplayImage(int)), this, SLOT(receiveDisplayImage(int)));

	pubNoteNum++;
}

void publicWorkspace::receiveDelete(int num) {
	for (int i = 0; i < pubNoteNum; i++) {
		if (pubNotes[i]->getUnique() == num) {
			allCells[i]->close();
			for (int j = i; j < pubNoteNum; j++) {
				if (j + 1 == pubNoteNum) break;

				pubNotes[j] = pubNotes[j + 1];
				allCells[j] = allCells[j + 1];
			}
			pubNoteNum--;
			break;
		}
	}
}

void publicWorkspace::receiveDisplayImage(int num) {
	char q[10];
	sprintf(q, "%d", num);
	string kk = pubNotes[num]->getFile();
	img = new image(this);

	QMessageBox::information(this, "success", kk.c_str());
	img->finallyImageOutput(kk.c_str());
}

void publicWorkspace::onToDashClick() {
	this->hide();
	writeToFile();
	emit sendToDash();
}

void publicWorkspace::filterByName()
{

}
void publicWorkspace::filterByTopic()
{

}
void publicWorkspace::filterByUser()
{

}
void publicWorkspace::filterBySubject()
{

}

void publicWorkspace::addOnLoad() {
	readFromFile();
	char q[10];
	sprintf(q, "%d", pubNoteNum);
	QMessageBox::information(this, "success", q);
	/*for (int i = 0; i < rownumber; i++) {
		//QString qstr = QString::fromStdString();
		addCells(allNotes[i]->getFile());
	}*/
}

void publicWorkspace::readFromFile() {
	int size;
	string ptype;
	ifstream inf;
	inf.open(filepath, ios::in);
	if (!inf)
	{
		//QMessageBox::information(this, "failed", "couldn't read info");
		return;
	}
	pubNoteNum = 0;
	while (true)
	{
		if (inf.eof()) { cout << pubNoteNum << " end of file" << endl; break; }
		inf >> ptype;
		if (!inf)
		{
			cout << "can't open file2" << endl;
			return;
		}
		if (ptype == "sclN") {
			pubNotes[pubNoteNum] = new schoolNotes();
			size = sizeof(schoolNotes);
		}
		else if (ptype == "persN") {
			pubNotes[pubNoteNum] = new personalNotes();
			size = sizeof(personalNotes);
			cout << "type detected" << endl;
		}
		else cout << "unknown class type" << endl;

		pubNotes[pubNoteNum]->deserialize(inf);

		string t = pubNotes[pubNoteNum]->Gettitle();
		int unique = pubNotes[pubNoteNum]->getUnique();
		addCells(t, unique);
		//cout << allNotes[rownumber]->Getdate() << " " << allNotes[rownumber]->getFile() << "printed from read" << endl;
		//rownumber++;
	}
	inf.close();
}

void publicWorkspace::writeToFile() {
	int size;
	ofstream ouf;
	string ptype;
	ouf.open(filepath, ios::binary);
	if (!ouf)
	{
		//qDebug() << "\nCan't open file\n"; return;
		//QMessageBox::information(this, "failed", "couldn't write info");
		return;
	}
	for (int j = 0; j < pubNoteNum; j++)
	{
		ptype = pubNotes[j]->get_type();
		ouf << ptype << " ";
		pubNotes[j]->serialize(ouf);
		if (!ouf)
		{
			//QMessageBox::information(this, "failed", "couldn't read info");
			return;
		}

	}
	ouf.close();
}


