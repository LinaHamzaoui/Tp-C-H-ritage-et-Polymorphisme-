#include "Vehicul_roulant.h"
#include <string>
#include <iostream>

using namespace std;

Vehicul_roulant::Vehicul_roulant()
    : nom("fiat")
{

}

Vehicul_roulant::~Vehicul_roulant(){}

void Vehicul_roulant :: setNom(const string name)
{

    nom = name;

}
string Vehicul_roulant :: getNom()const
{

    return this -> nom;

}
