#include "TP1heritage.h"

TP1heritage::TP1heritage(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void TP1heritage::onSendMessageButtonClicked()
{
	/*
	De dd(n);//qui initialise le dé avec n
	De dd(); //qui initialise le dé avec une valeur aléatoire comprise entre 1 et 6
	dd++; //qui permet de lancer le dé
	n += dd; //permet de stocker dans n la valeur du dé
	dd = 0; //permet de remettre le score à 0
	n < dd; //met le score total dans n
	*/
	ui.label->setText(); //affiche n
}