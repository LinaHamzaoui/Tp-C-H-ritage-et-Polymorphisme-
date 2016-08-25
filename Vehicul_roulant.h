#ifndef VEHICUL_ROULANT_H
#define VEHICUL_ROULANT_H
#include <string>
using namespace std;

class Vehicul_roulant
{

    public:
        Vehicul_roulant();
        virtual ~Vehicul_roulant();

        string getNom()const;
        void setNom(const std :: string name);
    protected:
        string nom;

};

#endif // VEHICUL_ROULANT_H
