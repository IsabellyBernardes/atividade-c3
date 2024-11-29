#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>
#include "arranjo.h"

class Aluno {
private:
    std::string nome;
    std::string mat;

public:
    Aluno() {}
    Aluno(const char* nome, const char* mat) : nome(nome), mat(mat) {}

    friend class Arranjo<Aluno>;
};

template<>
void Arranjo<Aluno>::set(int idx, const Aluno& aluno) {
    if (idx < 0 || idx >= tamanho) {
        throw std::out_of_range("Indice fora do arranjo");
    }
    items[idx].nome = aluno.nome;
    items[idx].mat = aluno.mat;
}

template<>
void Arranjo<Aluno>::exibir() {
    for (int i = 0; i < tamanho; ++i) {
        std::cout << i << " : " << items[i].mat << " = " << items[i].nome << std::endl;
    }
}

#endif // ALUNO_H
