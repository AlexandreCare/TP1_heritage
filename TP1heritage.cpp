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

int TP1heritage::numbers()
{
	int u = 0;
	int n = 0;

	return u;
	return n;
}

void TP1heritage::scoreboard(int n, int u, int v)
{
	u = v;
	n += v;
	u += n;
	ui.label_2->setText(QString::number(n)); //affiche la somme des résultats de v
}


int TP1heritage::onSendMessageButtonClicked(int u, int n)
{
	//QString n = 0; //qui initialise le dé avec n
	//QString dd = QRandomGenerator::global()->bounded(1, 6); //qui permet de lancer le dé
	//n += dd; //permet de stocker dans n la valeur du dé
	int v = QRandomGenerator::global()->bounded(1, 7); //tirage du dé

	//quint32 v = QRandomGenerator::system();

	//affichage des valeurs
	ui.label->setText(QString::number(v)); //affiche v

	return v;
}
	