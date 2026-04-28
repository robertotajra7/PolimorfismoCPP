#ifndef CAIXA_H
#define CAIXA_H

template <typename T>
class Caixa {
private:
    T valor;

public:
    void setValor(T valor) {
        this->valor = valor;
    }

    T getValor() {
        return valor;
    }
};

#endif