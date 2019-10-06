#pragma once
#include "ui_progressDlg.h"

class ProgressDlg : public QDialog, public Ui::ProgressDialog
{
	Q_OBJECT

public:
	explicit ProgressDlg(QWidget* parent = 0);
};