// Alunos:
// Leonardo Franzin Ribeiro - 2108237
// Jarbas o terceiro -

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
    if(s1 == "X") {
        return;
    }

    if(raiz == NULL) { // Caso a árvore esteja vazia
        raiz = new NoArvore;
        raiz->entrada = s1;

        raiz->noEsquerdo = new NoArvore;
        raiz->noEsquerdo->entrada = s2;
        raiz->noEsquerdo->noEsquerdo = NULL;
        raiz->noEsquerdo->noDireito = NULL;

        raiz->noDireito = new NoArvore;
        raiz->noDireito->entrada = s3;
        raiz->noDireito->noEsquerdo = NULL;
        raiz->noDireito->noDireito = NULL;

    } else { // Caso a árvore já tenha alguma entrada
        PonteiroArv alvo;
        bool busca = BuscarNo(s1, raiz, alvo);
        if(s2 != "X") {
            alvo->noEsquerdo = new NoArvore;
            alvo->noEsquerdo->entrada = s2;
            alvo->noEsquerdo->noEsquerdo = NULL;
            alvo->noEsquerdo->noDireito = NULL;
        }
        
        if(s3 != "X") {
            alvo->noDireito = new NoArvore;
            alvo->noDireito->entrada = s3;
            alvo->noDireito->noEsquerdo = NULL;
            alvo->noDireito->noDireito = NULL;
        }
    }
}

// Pré-condição: A árvore foi criada
// Pós-condição: Procura o nó onde esse valor está inserido. Se não achar nada, retorna falso. Se
// achar, ele retorna verdadeiro e passa o ponteiro para o argumento "noInsercao".
bool ArvoreBinaria::BuscarNo(string s, PonteiroArv &noBusca, PonteiroArv &noInsercao) {
    bool d = false, e = false;
    if(noBusca == NULL)
        return false;
        
    if(noBusca->entrada == s) {
        noInsercao = noBusca;
        return true;
    }

    if(noBusca->noDireito != NULL)
        d = BuscarNo(s, noBusca->noDireito, noInsercao);

    if(noBusca->noEsquerdo != NULL)
        e = BuscarNo(s, noBusca->noEsquerdo, noInsercao);

    if(d == true || e == true) {
        return true;
    } else {
        return false;
    }
}

void ArvoreBinaria::Listar(int &nos, int &folhas) {
    Listar(raiz, nos, folhas);
}

void ArvoreBinaria::Listar(PonteiroArv p, int &nos, int &folhas) {
    if(p != NULL) {
        int filhos = 0;
        string statusFilhos = "";
        if(p->noEsquerdo != NULL) {
            filhos++;
            statusFilhos.append("E");
        }
        if(p->noDireito != NULL) {
            filhos++;
            statusFilhos.append("D");
        }

        if(filhos == 0) {
            statusFilhos = "F";
            folhas++;
        }

        nos++;

        cout << p->entrada << " " << filhos << " " << statusFilhos << endl;
        Listar(p->noEsquerdo, nos, folhas);
        Listar(p->noDireito, nos, folhas);
    }

    if(p == raiz) {
        cout << nos << " " << folhas << "\n";
    }
}