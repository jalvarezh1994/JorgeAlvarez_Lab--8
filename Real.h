#include <iostream>
#include <string>

using namespace std;

#ifndef REAL_H
#define REAL_H

class Real{
    protected:
    public:
        Real();
        virtual string getTipo() = 0;
};

#endif