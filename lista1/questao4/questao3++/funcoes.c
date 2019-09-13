#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

Lista* criaLista(){
    return NULL;
}

Lista* insere(Lista* ref, int valor){
    Lista* novoNo = (Lista*)malloc(sizeof(Lista));
    novoNo -> info = valor;
    novoNo -> prox = ref;
    ref = novoNo;
    return ref;
}

void imprime(Lista* ref){
    Lista* p;
    printf("\nImprimindo a lista:\n");
    if (ref == NULL){
        printf("Lista vazia. \n");
        return;
    }
    for (p = ref; p!= NULL; p = p -> prox){
        printf("%d", p-> info);
    }
}

Lista* remove1(Lista* ref, int valor){
    Lista* p = ref;
    while ((p != NULL)&& (p -> info != valor)){
        p = p -> prox;
        }
    if(p == NULL){
        return ref;
    }
    free(p);
    return ref;
}

void libera(Lista** lista){
    Lista* l = *lista;
    while(l != NULL){
        Lista* aux = l -> prox;
        free(l);
        l = aux;
    }
    *lista = NULL;
}


Lista* insereFim (Lista* lista, int valor){
    Lista* novoNo = criaLista();
    novoNo-> info = valor;
    Lista* l = lista;
    if(l == NULL){
        novoNo->prox = NULL;
        l = novoNo;
    }else{
        Lista* aux = l;
        while(aux -> prox != NULL){
            aux = aux -> prox;
        }
        novoNo -> prox = NULL;
    }
    return l;
}
