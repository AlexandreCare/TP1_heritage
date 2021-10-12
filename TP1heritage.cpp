#include "TP1heritage.h"
#include <QRandomGenerator>
#include <QDebug>
#include <QtGlobal>
#include <QString>

TP1heritage::TP1heritage(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void TP1heritage::onSendMessageButtonClicked()
{
	//QString n = 0; //qui initialise le dé avec n
	//QString dd = QRandomGenerator::global()->bounded(1, 6); //qui permet de lancer le dé
	//n += dd; //permet de stocker dans n la valeur du dé
	int n = 0;
	int u = 0;
	int v = QRandomGenerator::global()->bounded(1, 7);
	//quint32 v = QRandomGenerator::system();
	n += v;
	u += n;
	n += n;
	ui.label->setText( QString::number(v)); //affiche v
	ui.label_2->setText( QString::number(n)); //affiche n
}