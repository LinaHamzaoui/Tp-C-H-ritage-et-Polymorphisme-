#include "moteur.h"
#include <string>
using namespace std;

moteur::moteur()
    :marque("V8 alpha")
{

}

moteur::~moteur(){}

string moteur :: getMarque()
{
    return this -> marque;
}
void moteur :: setMarque(string Marque)
{
    marque = Marque;
}
