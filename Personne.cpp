#include "Personne.h"
#include <string>
#include <iostream>

using namespace std;

Personne::Personne()
    :m_nom("Paul"),m_age(0)
{

}

Personne::Personne(const Personne& p)
    :m_nom(p.m_nom),m_age(p.m_age)
{

}

Personne::~Personne()
{

}

string Personne :: getNom()
{
    return m_nom;
}

void Personne :: setNom(string name)
{
    m_nom = name;
}

int Personne :: getAge()
{
    return m_age;
}
void Personne :: setAge(int age)
{
   m_age = age;
}

Personne& Personne :: operator=(const Personne& p)
{
    m_nom = p.m_nom;
    m_age = p.m_age;
    return *this;
}
Personne Personne :: operator+(int p)
{
    m_age += p;
    return *(this);
}

ostream& operator<<(ostream& os, const Personne& p)
{
    os << p.m_nom << endl;
    return os;
}

istream& operator>>(istream& is, Personne& p)
{
    is >> p.m_nom;
    return is;
}
