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

/*
void TP1heritage::numbers()
{
	int u = 0;

	int n = 0;
}
*/

void TP1heritage::onSendMessageButtonClicked()
{
	//QString n = 0; //qui initialise le d� avec n
	//QString dd = QRandomGenerator::global()->bounded(1, 6); //qui permet de lancer le d�
	//n += dd; //permet de stocker dans n la valeur du d�

	int u = 0;
	int n = 0;
	int v = QRandomGenerator::global()->bounded(1, 7); //tirage du d�

	//quint32 v = QRandomGenerator::system();
	u = v ;
	n += u + v;
	//affichage des valeurs
	ui.label->setText( QString::number(v)); //affiche v
	ui.label_2->setText( QString::number(n)); //affiche la somme des r�sultats de v
}