#pragma once

#include <QMainWindow>
#include "ui_remWindow.h"
#include "Header.h"
#include "remEdit.h"

class remWindow : public QMainWindow
{
	Q_OBJECT

public:
	remWindow(QWidget *parent = nullptr);
	~remWindow();

private slots:
	void on_reminder_add_clicked();
	void show_message();
	void on_Edit_button_clicked();
	void on_remove_button_clicked();

private:
	Ui::remWindowClass ui;
	QVector<QTimer*> timers;
};
