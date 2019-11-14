#pragma once
#include "ui_systemArguments.h"

class SystemArgumentsDlg : public QDialog, public Ui::SystemArgumentsDialog
{
	Q_OBJECT

public:
	explicit SystemArgumentsDlg(QWidget* parent = 0);
	void accept();
};