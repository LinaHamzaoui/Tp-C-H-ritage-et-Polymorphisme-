#include "C.h"
#include "B.h"
#include "A.h"
#include <iostream>

    using namespace std;

C::C()
{
    cout << "\n\t constructeur C\n"<< endl;
}

C::~C()
{
    cout << "\n\t destructeur C\n "<< endl;
}

void C:: h()
{
    obj.f();
    cout << "\n methode de la classe C \t" << z <<endl;
}
