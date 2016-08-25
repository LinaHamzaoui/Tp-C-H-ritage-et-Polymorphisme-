#include "Volant.h"
#include <string>

using namespace std;

Volant::Volant()
    :nom("ORECA")
{

}

Volant::~Volant(){}

string Volant :: getNom()
{
    return this -> nom;
}
void Volant :: setNom(string name)
{
    nom = name ;
}

