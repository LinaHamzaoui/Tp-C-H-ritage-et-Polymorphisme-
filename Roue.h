#ifndef ROUE_H
#define ROUE_H
#include <iostream>

class Roue
{
    public:
        Roue();
        virtual ~Roue();
        int getDiametre();
        void setDiametre( int diametre);
        void saisieRoue();
    protected:
        int _Diametre;
};

#endif // ROUE_H
