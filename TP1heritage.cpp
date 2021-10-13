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

int TP1heritage::onSendMessageButtonClicked()
{
	this->v = QRandomGenerator::global()->bounded(1, 7);
	//affichage des valeurs
	this->tiragede = v;
	ui.label->setText(QString::number(v));
	this->scoreboard();
	return this->tiragede;
}

int TP1heritage::scoreboard()
{
	this->scoretotal += tiragede;
	QString str = QString::number(this->scoretotal);
	ui.label_2->setText(str); //affiche la somme des résultats du scoretotal
	return this->scoretotal;
}

