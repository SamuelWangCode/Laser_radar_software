#pragma once
#include  "ui_preprocessingDlg.h"
#include <QButtonGroup>
#include <QProgressDialog>

class PreprocessingDlg : public QDialog, public Ui::PreprocessingDialog
{
	Q_OBJECT
private:
	QStringList address;
	QButtonGroup * groupButton;
	size_t iSize;
	QProgressDialog *progress;
	
public:
	explicit PreprocessingDlg(QWidget* parent = 0);
	void chooseFile();
	void exert();
	void selectionHasChanged();
};