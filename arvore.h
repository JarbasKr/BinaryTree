// Alunos:
// Leonardo Franzin Ribeiro - 2108237
// Jarbas o terceiro - 

#ifndef ARVORE_H
#define ARVORE_H

#include <iostream>
using namespace std;

class ArvoreBinaria {
    public:
        ArvoreBinaria();
        ~ArvoreBinaria();
        void Inserir(string chave1, string chave2, string chave3);
        void Deletar(string s);
        bool Procurar(string s);

    private:
        struct NoArvore {
            string entrada;
            NoArvore *noEsquerdo, *noDireito;
        };
        typedef NoArvore* PonteiroArv;
        bool BuscarNo(string s, PonteiroArv &noBusca, PonteiroArv &noInsercao);
        PonteiroArv raiz;
};

#endif