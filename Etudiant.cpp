#include "Etudiant.h"
#include <string>
#include <iostream>

using namespace std;

Etudiant::Etudiant(string _name)
    :Personne(),nom(_name)
{

}

Etudiant::~Etudiant()
{

}


string Etudiant :: getName()
{
    return nom;
}
void Etudiant :: setName(string name)
{
    nom = name;
}


ostream& operator<<(ostream& os, const Etudiant& e)
{
    os << e.nom << endl;
    return os;
}

istream& operator>>(istream& is, Etudiant& e)
{
    is >> e.nom;
    return is;
}
