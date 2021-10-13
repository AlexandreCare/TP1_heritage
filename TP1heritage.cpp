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

//permet de faire un tirage de d� quand le boutton de tirage est cliqu�
int TP1heritage::onSendMessageButtonClicked()
{
	this->v = QRandomGenerator::global()->bounded(1, 7); //tirage du d�
	this->tiragede = v;
	ui.label->setText(QString::number(v)); //afichage du score obtenue
	this->scoreboard(); //on transmet le score obtenue au score total
	return this->tiragede;
}

//permet de remettre le score a 0 quand le boutton de reset est cliqu�
void TP1heritage::onButtonResetClicked()
{
	this->scoretotal = 0; //remise a 0 du score
	this->scoreboard();
}

//permet d'avoir le total de tout les tirages
int TP1heritage::scoreboard()
{
	this->scoretotal += tiragede; //ajout du score obtenue au total d�ja obtenue
	QString str = QString::number(this->scoretotal);
	ui.label_2->setText(str); //affiche la somme des r�sultats du scoretotal
	return this->scoretotal;
}