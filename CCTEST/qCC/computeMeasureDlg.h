#pragma once
#include "ui_computeMeasureDlg.h"

class ComputeMeasureDlg : public QDialog, public Ui::ComputeMeasureDialog
{
	Q_OBJECT

public:
	explicit ComputeMeasureDlg(QWidget* parent = 0);
	void chooseFile1();
	void chooseFile2();
	void chooseFile3();
	void exert();
};