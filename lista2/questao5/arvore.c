#include "arvore.h"
#include <stdlib.h>
#include <stdio.h>

Arvore* cria(char c, Arvore* esq, Arvore* dir){
    Arvore* nova = (Arvore*)malloc(sizeof(Arvore));
    nova -> info = c;
    nova -> esq = esq;
    nova -> dir = dir;
    return nova;
}

int vazia(Arvore* raiz){
    return raiz == NULL;
}

void imprime (Arvore* raiz){
    if (!vazia(raiz)){
        printf("%c", raiz -> info);
        imprime(raiz -> esq);
        imprime(raiz -> dir);
    }
}

void libera(Arvore** raiz){
    if (!vazia(*raiz)){
        libera(&((*raiz)-> esq));
        libera(&((*raiz)-> dir));
        free(*raiz);
        *raiz = NULL;
   }
}