#ifndef ARRANJO_H
#define ARRANJO_H

#include <iostream>
#include <stdexcept>

template <class T>
class Arranjo {
private:
    int tamanho;
    T* items;

public:
    Arranjo(int tam) {
        tamanho = tam;
        items = new T[tamanho];
        for (int i = 0; i < tamanho; ++i) {
            items[i] = T();
        }
    }

    virtual ~Arranjo() {
        delete[] items;
    }

    virtual T get(int idx) {
        if (idx < 0 || idx >= tamanho) {
            throw std::out_of_range("Indice fora do arranjo");
        }
        return items[idx];
    }

    virtual void set(int idx, const T& item) {
        if (idx < 0 || idx >= tamanho) {
            throw std::out_of_range("Indice fora do arranjo");
        }
        items[idx] = item;
    }

    virtual void exibir() {
        for (int i = 0; i < tamanho; ++i) {
            std::cout << i << ": " << items[i] << std::endl;
        }
    }
};

#endif // ARRANJO_H
