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
	//int onSendMessageButtonClicked();

private:
    Ui::TP1heritageClass ui;

public slots:
	
	int onSendMessageButtonClicked();
	void onButtonResetClicked();

	//int de::operator +=(onSendMessageButtonClicked());

	void scoreboard();
	
	//void onSendMessageButtonClicked();
};
/*
class heritage : public TP1heritage // classe fille
{
	
public :
	int score;

private :
	Ui::TP1heritageClass ui;

public slots:
	int jet(); //simule le jet d’un dé
	int histoscoreboard();
	//void jet(int n); //simule le jet de n dé
};
*/