#include "TP1heritage.h"

TP1heritage::TP1heritage(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void TP1heritage::onSendMessageButtonClicked()
{
	/*
	De dd(n);//qui initialise le d� avec n
	De dd(); //qui initialise le d� avec une valeur al�atoire comprise entre 1 et 6
	dd++; //qui permet de lancer le d�
	n += dd; //permet de stocker dans n la valeur du d�
	dd = 0; //permet de remettre le score � 0
	n < dd; //met le score total dans n
	*/
	ui.label->setText(); //affiche n
}