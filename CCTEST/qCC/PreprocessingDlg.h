#pragma once
#include  "ui_preprocessingDlg.h"
#include <QButtonGroup>

class PreprocessingDlg : public QDialog, public Ui::PreprocessingDialog
{
	Q_OBJECT
private:
	QString address;
	QButtonGroup * groupButton;
public:
	explicit PreprocessingDlg(QWidget* parent = 0);
	void chooseFile();
	void exert();
	void selectionHasChanged();
};