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
	ui.tableWidget->setVisible(false);
	ui.pushButton_2->setVisible(false);

	this->ui.tableWidget->setRowCount(10);
	this->ui.tableWidget->setColumnCount(1);
}

//permet de faire un tirage de d� quand le boutton de tirage est cliqu�
int TP1heritage::onSendMessageButtonClicked()
{
	this->v = QRandomGenerator::global()->bounded(1, 7); //tirage du d�
	this->tiragede = v;
	ui.label->setText(QString::number(v)); //afichage du score obtenue
	ui.tableWidget;
	this->scoreboard(); //on transmet le score obtenue au score total
	this->scoretotal += tiragede; //ajout du score obtenue au total d�ja obtenue
	
	return this->tiragede;
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
	this->histo();
	QString str = QString::number(scoretotal);
	ui.label_2->setText(str); //affiche la somme des r�sultats du scoretotal
}

void TP1heritage::histo()
{
	int i = 0;
	
	for (i; i < 10; i++){

		QTableWidgetItem *value = new QTableWidgetItem(QString::number(tiragede));
		ui.tableWidget->setItem(i, 0, value);

	}
}

void TP1heritage::de()
{
	ui.pushButton_2->setVisible(false);
	ui.tableWidget->setVisible(false);
}
void TP1heritage::dehisto()
{
	ui.pushButton_2->setVisible(true);
	ui.tableWidget->setVisible(true);
}

void TP1heritage::onButtonResethistoClicked()
{

	int tirage = 0;

	int i = 0;

	for (i; i < 10; i++) {

		QTableWidgetItem *value = new QTableWidgetItem(QString::number(tirage));
		ui.tableWidget->setItem(i++, 0, value);

	}
}