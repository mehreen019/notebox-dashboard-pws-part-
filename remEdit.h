#pragma once

#include <QDialog>
#include "ui_remEdit.h"
#include "Header.h"

class remEdit : public QDialog
{
	Q_OBJECT

public:
	remEdit(QWidget *parent = nullptr);
	~remEdit();

	QListWidget* getListWidget() const;

private slots:
	void on_remove_clicked();


	void on_save_clicked();

private:
	Ui::remEditClass ui;
	QVector<QTimer*> timers;
};

