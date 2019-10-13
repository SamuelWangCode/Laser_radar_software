#ifndef DSM_DIALOG_H
#define DSM_DIALOG_H

#include <QDialog>

namespace Ui {
	class DSM_Dialog;
}

class DSM_Dialog : public QDialog
{
	Q_OBJECT

public:
	explicit DSM_Dialog(QWidget *parent = nullptr);
	~DSM_Dialog();

private slots:
	void on_SelectFileButton_clicked();

	void on_pushButton_generateDSM_clicked();

private:
	Ui::DSM_Dialog *ui;
	QString fileName;
};

#endif // DSM_DIALOG_H
