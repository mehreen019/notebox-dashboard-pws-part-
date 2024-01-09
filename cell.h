#pragma once

#include <QMainWindow>
#include "ui_cell.h"
#include "Header.h"

class cell : public QMainWindow
{
	Q_OBJECT

public:
	cell(QWidget *parent = nullptr);
	~cell();
	int cellNum;
	int unique;
	void setTitle(std::string t);

public slots:
	void onDeleteClick();
	void onDisplayClick();
signals:
	void sendDeleteCellSignal(int cellNum);
	void sendDisplayImage(int);

private:
	Ui::cellClass ui;
};
