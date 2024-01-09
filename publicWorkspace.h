#pragma once
//#include <QMainWindow>
#include "ui_publicWorkspace.h"
#include "Header.h"
#include "notes.h"
#include "wsCell.h"
#include "image.h"

class publicWorkspace : public QMainWindow
{
	Q_OBJECT

public:
	publicWorkspace(QWidget *parent = nullptr);
	~publicWorkspace();
	//static void uploadFile();
	void filterByName();
	void filterByTopic();
	void filterByUser();
	void filterBySubject();
	void addCells(string, int);
	static notes* pubNotes[];
	static int pubNoteNum;

	QVector<wsCell*> allCells;

	void addOnLoad();
	void readFromFile();
	static void writeToFile();

public slots:
	void onToDashClick();
	void receiveDelete(int num);
	void receiveDisplayImage(int);
	void closeEvent(QCloseEvent* event) {
		emit crossClicked();
		event->ignore();
	}
	void handleClose();

signals:
	void sendToDash();
	void crossClicked();

private:
	Ui::publicWorkspaceClass ui;
	image* img;
};
