#pragma once

#include <QMainWindow>
#include "ui_dashboard.h"
#include "Header.h"
#include "notes.h"
#include "button.h"

class dashboard : public QMainWindow
{
	Q_OBJECT

public:
	dashboard(QWidget *parent = nullptr);
	~dashboard();

	FILE* tf;

	void addTask();
	void addPersonalNote(string title, string date, FILE* t);
	void addSclNote(string Cat, string Topic, string sub, string title, string date, FILE* t);
	void addReminder();
	void addDeadline();
	void display();

public slots:
	void noteAddClick();
	void submitSclNoteInfo();
	void submitFile();

private:
	Ui::dashboardClass ui;
	vector<schoolNotes> sclNotes;
	vector<personalNotes> personal;
	button* b;
	//vector<task> tasks;

};
