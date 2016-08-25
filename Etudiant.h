#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <string>
#include <iostream>
#include "Personne.h"
using namespace std;


class Etudiant : public Personne
{

    public:
        Etudiant(string nom);
        virtual ~Etudiant();

        string getName();
        void setName(string name);

        friend ostream& operator<<(ostream& os, const Etudiant& e);
        friend istream& operator>>(istream& is, Etudiant& e);
    private:
        string nom;
};

#endif // ETUDIANT_H
