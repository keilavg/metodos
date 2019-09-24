#include "pilha.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Pilha * cria(){
    Pilha * p = (Pilha*)malloc (sizeof(Pilha));
    p -> topo = NULL;
    return p;
}

int pilha_vazia(Pilha* p){
    return (p -> topo == NULL);
}


void push1(Pilha* p,char v[100] ){
    Lista* no = (Lista*)malloc(sizeof(Lista));
    strcpy(no -> info, v);
    no -> prox = p -> topo;
    p -> topo = no;

}

void pop(Pilha* p ){
    if (pilha_vazia(p)){
        printf("\npilhavazia");
        return;
    }
    Lista * aux = p -> topo;
    p -> topo = p->topo->prox;
    free(aux);
}

void imprime(Pilha* p){
    if ((p == NULL) || (p -> topo == NULL)){
        printf("Pilha vazia! \n");
        return;
    }
    for (Lista* l = p -> topo; l != NULL; l = l -> prox){
        printf("%s", l-> info);
    }
}

void libera(Pilha ** p)
{
    Lista* l = (*p)-> topo;
    while( l != NULL){
        Lista* aux = l -> prox;
        free(l);
        l = aux;
    }
    free(*p);
    *p = NULL;
}

void qntElementos(Pilha* p){
    int cont = 0;
    Lista* l = p -> topo;
    while(l != NULL){
        cont ++;
        l = l -> prox;
    }
    printf("Quantidade de elementos na fila é: %d\n", cont);
    
}