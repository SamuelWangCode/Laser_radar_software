#pragma once
#include "ui_cloudClassifyDlg.h"
class CloudClassifyDlg : public QDialog, public Ui::CloudClassifyDialog
{
	Q_OBJECT


public:
	explicit CloudClassifyDlg(QWidget* parent = 0);
	void exert();
};