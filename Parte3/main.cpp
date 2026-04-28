#include <iostream>
#include "ponto.h"

using namespace std;

int main() {
    Ponto p1(2, 3);
    Ponto p2(4, 5);

    Ponto resultado = p1 + p2;

    cout << resultado << endl;

    return 0;
}