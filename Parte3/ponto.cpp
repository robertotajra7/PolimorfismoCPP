#include "ponto.h"

Ponto::Ponto(float x, float y) {
    this->x = x;
    this->y = y;
}

Ponto Ponto::operator+(Ponto p) {
    return Ponto(this->x + p.x, this->y + p.y);
}

ostream& operator<<(ostream& out, Ponto p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}