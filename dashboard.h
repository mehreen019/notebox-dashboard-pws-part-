#pragma once

#include <QMainWindow>
#include "ui_dashboard.h"
#include "Header.h"
#include "notes.h"
#include "button.h"
#include "cell.h"
#include "image.h"

class dashboard : public QMainWindow
{
	Q_OBJECT

public:
	dashboard(QWidget *parent = nullptr);
	~dashboard();

	QString tf;

	void addTask();
	void addPersonalNote(string title, string date, QString t);
	void addSclNote(string Cat, string Topic, string sub, string title, string date, QString t);
	void addReminder();
	void addDeadline();
	void display();
	void addCells(string);
	QVector<cell*> allCells;
	static int rownumber;

public slots:
	void noteAddClick();
	void submitSclNoteInfo();
	void submitFile();
	void receiveDelete(int num);
	void receiveDisplayImage(int num);

private:
	Ui::dashboardClass ui;
	vector<schoolNotes> sclNotes;
	vector<personalNotes> personal;
	button* b;
	image* img;

	//vector<task> tasks;

};
