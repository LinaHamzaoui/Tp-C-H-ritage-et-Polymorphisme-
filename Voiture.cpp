#include "Voiture.h"
#include "Vehicul_roulant.h"

Voiture::Voiture()
    :Vehicul_roulant(),mot(), Vol(),R ()
{

}

Voiture::~Voiture(){}


Roue Voiture ::  getRoue()
{
    return this -> R;
}


Volant Voiture ::  getVolant()
{
    return this -> Vol;
}
void Voiture ::setRoue(Roue roue)
{
    R = roue;
}
void Voiture :: setVolant(Volant volant)
{
    Vol = volant;

}
moteur Voiture :: getMoteur()
{
    return this -> mot;
}

void Voiture :: setMoteur(moteur moteur)
{
    mot= moteur;
}
void Voiture::saisieRoue()
{
    R.saisieRoue();

}
