#include "A.h"
#include <iostream>

using namespace std;



A::A()
    {
        cout << "\n\t constructeur A\n"<< endl;

    }

A::~A()
    {
        cout << "\n\t destructeur A\n "<< endl;
    }


void A::f()
    {
        cout << "\n methode de la classe A \t"<<i <<endl;
    }

