#pragma once
#include "ui_flightArgumentsDlg.h"

class FlightArgumentsDlg : public QDialog, public Ui::FlightArgumentsDialog
{
	Q_OBJECT

public:
	explicit FlightArgumentsDlg(QWidget* parent = 0);
	void accept();
};