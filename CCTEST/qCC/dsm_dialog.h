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

    void on_pushButton_clicked();

    void on_pushButton_reset_clicked();

private:
    Ui::DSM_Dialog *ui;
	QString fileName=nullptr;
	std::string maxX;
	std::string minX;
	std::string maxY;
	std::string minY;

};

#endif // DSM_DIALOG_H
