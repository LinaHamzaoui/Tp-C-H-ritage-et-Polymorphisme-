#include "Roue.h"

#include <iostream>
 using namespace std;

Roue::Roue()

{
    //ctor
}

Roue::~Roue()
{
    //dtor
}


int Roue ::getDiametre()
{
    return _Diametre;
}
void Roue :: setDiametre( int diametre)
{
    _Diametre = diametre;
}
void Roue::saisieRoue()
{
    cout <<"\nVeuillez saisir diametre de la roue:\n"<< endl;
    cin>>_Diametre;
}
