#ifndef PONTO_H
#define PONTO_H

#include <iostream>
using namespace std;

class Ponto {
public:
    float x, y;

    Ponto(float x, float y);
    Ponto operator+(Ponto p);
};

ostream& operator<<(ostream& out, Ponto p);

#endif