#ifndef VOITURE_H
#define VOITURE_H
#include "Roue.h"
#include "moteur.h"
#include "Volant.h"
#include "Vehicul_roulant.h"


class Voiture : public Vehicul_roulant
{

    public:
        Voiture();
        virtual ~Voiture();

        void setVolant(Volant volant);
        void setRoue(Roue roue);
        void setMoteur(moteur moteur);

        Roue getRoue();
        moteur getMoteur();
        Volant getVolant();
        void saisieRoue();

    private:
        moteur mot;
        Volant Vol;
        Roue R;


};

#endif // VOITURE_H
