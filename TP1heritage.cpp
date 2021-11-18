#include "TP1heritage.h"
#include <QRandomGenerator>
#include <QDebug>
#include <QtGlobal>
#include <QString>
#include <QTableWidget>
#include <QTableView>

TP1heritage::TP1heritage(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	ui.pushButton_4->setVisible(false);
	ui.tableWidget->setVisible(false);

	this->ui.tableWidget->setRowCount(10);
	this->ui.tableWidget->setColumnCount(1);

}

//permet de faire un tirage de dé quand le boutton de tirage est cliqué
int TP1heritage::onSendMessageButtonClicked()
{
	this->v = QRandomGenerator::global()->bounded(1, 7); //tirage du dé
	this->tiragede = v;
	ui.label->setText(QString::number(v)); //afichage du score obtenue
	ui.tableWidget;
	this->scoreboard(); //on transmet le score obtenue au score total
	this->scoretotal += tiragede; //ajout du score obtenue au total déja obtenue
	this->histo();
	return this->tiragede;
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

void TP1heritage::histo()
{

	for (int tiragede = 0; tiragede < 10 ; ++tiragede) {

		QTableWidgetItem *value = new QTableWidgetItem(QString::number(tiragede));
		ui.tableWidget->setItem(0, 0, value);

	}
}

void TP1heritage::onButtonHidedeClicked()
{
	//cache les boutons et les labels pour le dé simple
	ui.pushButton_4->setVisible(true);
	ui.tableWidget->setVisible(true);
}

void TP1heritage::onButtonHidedehistoClicked()
{
	ui.pushButton_4->setVisible(false);
	ui.tableWidget->setVisible(false);
}