#include <iostream>
#include <string>
#include "maior_valor.h"

using namespace std;

int main() {
    cout << maiorValor(10, 20) << endl;
    cout << maiorValor(5.5, 2.3) << endl;
    cout << maiorValor(string("a"), string("b")) << endl;

    return 0;
}