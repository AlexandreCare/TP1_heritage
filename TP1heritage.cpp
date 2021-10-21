#include "TP1heritage.h"
#include <QRandomGenerator>
#include <QDebug>
#include <QtGlobal>
#include <QString>
#include <QTableView>

TP1heritage::TP1heritage(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

//permet de faire un tirage de dé quand le boutton de tirage est cliqué
int TP1heritage::onSendMessageButtonClicked()
{
	this->v = QRandomGenerator::global()->bounded(1, 7); //tirage du dé
	this->tiragede = v;
	ui.label->setText(QString::number(v)); //afichage du score obtenue
	this->scoreboard(); //on transmet le score obtenue au score total
	this->scoretotal += tiragede; //ajout du score obtenue au total déja obtenue
	return this->tiragede;
	return this->scoretotal;
}

//permet de remettre le score a 0 quand le boutton de reset est cliqué
void TP1heritage::onButtonResetClicked()
{
	this->scoretotal = 0; //remise a 0 du score
	this->v = 0;
	ui.label->setText(QString::number(v));
	this->scoreboard();
}

//permet d'avoir le total de tout les tirages
void TP1heritage::scoreboard()
{
	QString str = QString::number(scoretotal);
	ui.label_2->setText(str); //affiche la somme des résultats du scoretotal
}

/*
int heritage::jet()
{
	this->score = QRandomGenerator::global()->bounded(1, 7);
	ui.label->setText(QString::number(score));
	this->histoscoreboard();
	return this->score;
}

int heritage::histoscoreboard()
{
	this->score += scoretotal; //ajout du score obtenue au total déja obtenue
	QString str = QString::number(this->score);
	//tableau (base)
}
*/