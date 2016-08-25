#ifndef VOLANT_H
#define VOLANT_H
#include <string>

using namespace std;

class Volant
{

    public:
        Volant();
        virtual ~Volant();

        string getNom();
        void setNom(string name);

    private:
        string nom;


};

#endif // VOLANT_H
