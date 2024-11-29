#include <iostream>
#include "funcoes.h"
#include "arranjo.h"
#include "aluno.h"

using namespace std;
using namespace funcoes;

int main() {
    // Parte 2 e Parte 3: Funções e Templates
    float x = 5.5, y = 10.15, z = 30.7;

    cout << "Antes: x = " << x << " y = " << y << endl;
    trocar(x, y);
    cout << "Depois: x = " << x << " y = " << y << endl;

    cout << "Minimo entre " << x << " e " << y << ": " << minimo(x, y) << endl;
    cout << "Maximo entre " << y << " e " << z << ": " << maximo(y, z) << endl;

    cout << "Minimo de \"strA\" e \"strB\": " << minimo("strA", "strB") << endl;
    cout << "Maximo de \"strA\" e \"strB\": " << maximo("strA", "strB") << endl;

    // Parte 3: Templates de Classes
    Arranjo<int> arr(10);
    arr.set(4, 5);
    arr.set(7, 15);
    arr.set(8, 22);
    arr.exibir();

    Arranjo<float> arr_float(5);
    arr_float.set(0, 5.5);
    arr_float.set(1, 10.15);
    arr_float.set(2, 30.7);
    arr_float.exibir();

    // Parte 4: Especializando Templates de Classes
    Arranjo<Aluno> turma(3);
    turma.set(0, Aluno("Joao", "1234"));
    turma.set(1, Aluno("Maria", "5235"));
    turma.set(2, Aluno("Jose", "2412"));
    turma.exibir();

    return 0;
}
