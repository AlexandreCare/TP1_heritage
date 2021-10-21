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
	ui.pushButton_4->setVisible(false);
	ui.tableView->setVisible(false);
}

//permet de faire un tirage de d� quand le boutton de tirage est cliqu�
int TP1heritage::onSendMessageButtonClicked()
{
	this->v = QRandomGenerator::global()->bounded(1, 7); //tirage du d�
	this->tiragede = v;
	ui.label->setText(QString::number(v)); //afichage du score obtenue
	ui.tableView;
	this->scoreboard(); //on transmet le score obtenue au score total
	this->scoretotal += tiragede; //ajout du score obtenue au total d�ja obtenue
	return this->tiragede;
	return this->scoretotal;
}

//permet de remettre le score a 0 quand le boutton de reset est cliqu�
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
	ui.label_2->setText(str); //affiche la somme des r�sultats du scoretotal
}

void TP1heritage::onButtonHidedeClicked()
{
	//cache les boutons et les labels pour le d� simple
	ui.pushButton_4->setVisible(true);
	ui.tableView->setVisible(true);

	//r�v�le les boutons et les labels pour le d� avec historique

}

void TP1heritage::onButtonHidedehistoClicked()
{
	ui.pushButton_4->setVisible(false);
	ui.tableView->setVisible(false);
}