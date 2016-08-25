#ifndef VELO_H
#define VELO_H
#include "Roue.h"
#include "Vehicul_roulant.h"
 using namespace std;
 #include <string>

class Velo : public Vehicul_roulant
{
    public:
        Velo();
        virtual ~Velo();
        void setType(string type_velo);
        string getType();
        void setRoue(Roue roue);
        Roue  getRoue();
        void saisieRoue();
    protected:
    string typeVelo;
    Roue roue;
};

#endif // VELO_H
