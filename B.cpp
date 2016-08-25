#include "B.h"
#include <iostream>
using namespace std;

B::B(  )
{
    cout <<"constructeur B" << endl;
}

B::~B()
{
    cout <<"\tdestructeur B" << endl;
}

void B:: g()
{
    cout <<" methode de la classe B \t"<<y << endl;
}
