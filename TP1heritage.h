#include <QtWidgets/QMainWindow>
#include "ui_TP1heritage.h"

class TP1heritage : public QMainWindow // classe m�re
{
    Q_OBJECT

public:
    TP1heritage(QWidget *parent = Q_NULLPTR);
	//d�claration
	int v;
	int tiragede;
	int scoretotal;
	//int onSendMessageButtonClicked();

private:
    Ui::TP1heritageClass ui;

public slots:
	
	int onSendMessageButtonClicked();
	void onButtonResetClicked();

	//int de::operator +=(onSendMessageButtonClicked());

	void scoreboard();
	void onButtonHidedeClicked();
	void onButtonHidedehistoClicked();
	//void onSendMessageButtonClicked();
};
