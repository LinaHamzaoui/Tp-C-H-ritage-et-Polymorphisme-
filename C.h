#ifndef C_H
#define C_H
#include "B.h"
#include "A.h"


class C: public B
{
    public:
        C();
        virtual ~C();

        void h();
    private:
        int z = 3;
        A obj;
};

#endif // C_H
