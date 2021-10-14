#include <QtWidgets/QMainWindow>
#include "ui_TP1heritage.h"

class TP1heritage : public QMainWindow // classe mère
{
    Q_OBJECT

public:
    TP1heritage(QWidget *parent = Q_NULLPTR);
	//déclaration
	int v;
	int tiragede;
	int scoretotal;

private:
    Ui::TP1heritageClass ui;

public slots:
	
	int onSendMessageButtonClicked();
	void onButtonResetClicked();
	int scoreboard();
	
	//void onSendMessageButtonClicked();
};

class heritage : public TP1heritage // classe fille
{
	int x;
public:
	//void jet(); //simule le jet d’un dé
	//void jet(int n); //simule le jet de n dé
};