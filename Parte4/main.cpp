#include <iostream>
#include "caixa.h"

using namespace std;

int main() {
    Caixa<int> c1;
    c1.setValor(10);
    cout << c1.getValor() << endl;

    return 0;
}