#pragma once

#include <QMainWindow>
#include "ui_dashboard.h"
#include "Header.h"
#include "notes.h"
#include "button.h"
#include "cell.h"
#include "image.h"
using namespace std;


class dashboard : public QMainWindow
{
	Q_OBJECT

public:
	dashboard(QWidget *parent = nullptr);
	~dashboard();

	string tf;

	void addTask();
	void addPersonalNote(string title, string date);
	void addSclNote(string Cat, string Topic, string sub, string title, string date, string t);
	void addReminder();
	void addDeadline();
	string display(int);
	void addCells(string, int);
	QVector<cell*> allCells;
	int rownumber;
	int feduprow;

	void readFromFile();
	void writeToFile();
	void addOnLoad();
	void bufferimg();
	notes* allNotes[1000];


public slots:
	void noteAddClick();
	void submitSclNoteInfo();
	void submitFile();
	void receiveDelete(int num);
	void receiveDisplayImage(int);
	void closeEvent(QCloseEvent* event) {
		emit crossClicked();
		event->ignore();
	}
	void handleClose();
	

signals:
	void crossClicked();

private:
	Ui::dashboardClass ui;
	//vector<notes*> sclNotes;
	//vector<notes*> personal;
	
	button* b;
	image* img;

	//vector<task> tasks;

};
