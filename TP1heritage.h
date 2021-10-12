#include <QtWidgets/QMainWindow>
#include "ui_TP1heritage.h"

class TP1heritage : public QMainWindow
{
    Q_OBJECT

public:
    TP1heritage(QWidget *parent = Q_NULLPTR);

private:
    Ui::TP1heritageClass ui;

public slots:
	int onSendMessageButtonClicked(int u, int n);
	int numbers();
	void scoreboard(int n, int u, int v);
};