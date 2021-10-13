#include <QtWidgets/QMainWindow>
#include "ui_TP1heritage.h"

class TP1heritage : public QMainWindow
{
    Q_OBJECT

public:
    TP1heritage(QWidget *parent = Q_NULLPTR);
	int v;
	int u;
	int n;
	int tiragede;
	int scoretotal;

private:
    Ui::TP1heritageClass ui;

public slots:
	
	int onSendMessageButtonClicked();
	int scoreboard();
	
	//void onSendMessageButtonClicked();
};