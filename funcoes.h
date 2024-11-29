#ifndef FUNCOES_H
#define FUNCOES_H

#include <cstring> // Para strcmp

namespace funcoes {

    template <class T>
    void trocar(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }

    template <class T>
    T maximo(const T a, const T b) {
        return (a > b) ? a : b;
    }

    template <class T>
    T minimo(const T a, const T b) {
        return (a < b) ? a : b;
    }

    // Especialização para const char *
    template <>
    const char* maximo<const char*>(const char* a, const char* b) {
        return (std::strcmp(a, b) > 0) ? a : b;
    }

    template <>
    const char* minimo<const char*>(const char* a, const char* b) {
        return (std::strcmp(a, b) < 0) ? a : b;
    }

} // namespace funcoes

#endif // FUNCOES_H
