// Alunos:
// Leonardo Franzin Ribeiro - 2108237
// Jarbas Frederico Krempel - 2119729

#ifndef ARVORE_H
#define ARVORE_H

#include <iostream>
using namespace std;

class ArvoreBinaria {
    public:
        ArvoreBinaria();
        ~ArvoreBinaria();
        void Inserir(string chave1, string chave2, string chave3);
        void Listar(int &nos, int &folhas);

    private:
        struct NoArvore {
            string entrada;
            NoArvore *noEsquerdo, *noDireito;
        };
        typedef NoArvore* PonteiroArv;
        bool BuscarNo(string s, PonteiroArv &noBusca, PonteiroArv &noInsercao);
        PonteiroArv raiz;
        void Listar(PonteiroArv p, int &nos, int &folhas);
};

#endif
