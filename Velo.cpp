#include "Velo.h"
#include <string>
using namespace std;

Velo::Velo()
    : Vehicul_roulant(),roue(),typeVelo("VTT")
{

}

Velo::~Velo(){}

void Velo:: setType(string type_velo)
{
    typeVelo=type_velo;
}

string Velo:: getType()
{
    return this-> typeVelo;

}

void Velo ::setRoue(Roue Roue)
{
    Roue = roue;
}

Roue Velo ::  getRoue()
{
    return this -> roue;
}

void Velo::saisieRoue()
{
    roue.saisieRoue();

}
