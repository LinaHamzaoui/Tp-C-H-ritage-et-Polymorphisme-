#ifndef MOTEUR_H
#define MOTEUR_H
#include <string>
using namespace std;

class moteur
{

    public:
        moteur();
        virtual ~moteur();

        string getMarque();
        void setMarque(string marque);
    private:
        string marque;


};

#endif // MOTEUR_H
