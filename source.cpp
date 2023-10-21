// Alunos:
// Leonardo Franzin Ribeiro - 2108237
// Jarbas o terceiro - 

#include <iostream>
#include <fstream>
#include "arvore.h"
using namespace std;


int main() {
    ArvoreBinaria arvore = ArvoreBinaria();
    string v1, v2, v3, arquivo;
    
    cout << "Insira o nome do arquivo a ser lido: ";
    cin >> arquivo;

    ifstream lerInput(arquivo, ios::in);
    while(lerInput >> v1 >> v2 >> v3) {
        cout << v1 << " - " << v2 << " - " << v3 << endl;
    }

    return 0;
}