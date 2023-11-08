// Alunos:
// Leonardo Franzin Ribeiro - 2108237
// Jarbas Frederico Krempel - 2119729

#include <iostream>
#include <fstream>
#include "arvore.h"
using namespace std;


int main() {
    ArvoreBinaria arvore = ArvoreBinaria();
    string v1, v2, v3, arquivo;
    int nos = 0, folhas = 0;

    cout << "Insira o nome do arquivo a ser lido: ";
    cin >> arquivo;

    ifstream lerInput(arquivo, ios::in);
    while(lerInput >> v1 >> v2 >> v3) {
        //cout << v1 << " - " << v2 << " - " << v3 << endl; <- Usado para debugar
        arvore.Inserir(v1, v2, v3);
    }

    arvore.Listar(nos, folhas);

    return 0;
}
