#ifndef PERSONNE_H
#define PERSONNE_H
#include <string>
#include <iostream>

using namespace std;
class Personne
{
    private:
        string m_nom;
        int m_age;
    public:
        Personne();
        Personne(const Personne& p);
        virtual ~Personne();

        string getNom();
        int getAge();
        void setNom(string name);
        void setAge(int age);

        Personne& operator=(const Personne& p);
        friend istream& operator>>(istream& is, Personne& p);
        Personne operator+(int p);
        friend ostream& operator<<(ostream& os, const Personne& p);


};

#endif // PERSONNE_H
