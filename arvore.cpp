#include "arvore.h"

// Pré-condição: Nenhuma
// Pós-condição: Cria uma arvore binaria
ArvoreBinaria::ArvoreBinaria() {
    raiz = NULL;
}

// Pré-condição: Arvore foi construida
// Pós-condição: Deleta a Arvore
ArvoreBinaria::~ArvoreBinaria() {}

// Pré-condição: Arvore foi construida, os valores da linha do arquivo são passadas em 3 parâmetros.
// Pós-condição: Adiciona as entradas na árvore. Caso a árvore esteja vazia, começa na raiz.
void ArvoreBinaria::Inserir(string s1, string s2, string s3) {
    if(raiz == NULL) { // Caso a árvore esteja vazia
        NoArvore n, ne, nd;

        ne.entrada = s2;
        ne.noDireito = NULL;
        ne.noEsquerdo = NULL;
        
        nd.entrada = s3;
        nd.noDireito = NULL;
        ne.noEsquerdo = NULL;

        n.entrada = s1;
        n.noDireito = &nd;
        n.noEsquerdo = &ne;

        raiz = &n;
    } else { // Caso a árvore já tenha alguma entrada

    }
}

ArvoreBinaria::PonteiroArv ArvoreBinaria::BuscarNo(string s, PonteiroArv &a) {
    if(a == NULL) {
        return NULL;
    }
}