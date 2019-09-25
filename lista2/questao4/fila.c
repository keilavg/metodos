#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

Fila* cria(){
    Fila* fila = (Fila*)malloc(sizeof(Fila));
    fila -> frente = NULL;
    fila -> fundo = NULL;
    return fila;
}

int fila_vazia(Fila* f){
    if(f == NULL){
        return 1;
    }
    return(f-> frente == NULL);
}

void inserir(Fila* f, int v){
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    novo -> info = v;
    novo -> prox = NULL;
    if(fila_vazia(f)){
        f -> frente = novo;
    }else{
        f -> fundo -> prox = novo;
    }
    f -> fundo = novo;
}

void remover(Fila* f){
    Lista* aux;
    if (fila_vazia(f)){
        printf("Fila Vazia \n");
        return;
    }
    aux = f -> frente;
    f -> frente = aux -> prox;
    if (f -> frente == NULL){
        f -> fundo = NULL;
    }
    free(aux);
}

void imprime (Fila* f){
    if (fila_vazia(f)){
        printf("Fila vazia \n");
        return;
    }
    for (Lista* l = f -> frente; l!= NULL; l = l-> prox){
        printf("%d\n", l -> info);
    }
}

void libera(Fila** f){
    if (fila_vazia(*f)){
        return;
    }
    Lista* l = (*f)-> frente;
    while(l!= NULL){
        Lista* aux = l -> prox;
        free(l);
        l = aux;
    }
    free(*f);
    (*f) = NULL;
}

void posi(Fila* f, int v){
    int cont=0;
    for (Lista* l = f -> frente; l!= NULL; l = l-> prox){
        
        if (l -> info == v){
            printf("valor encontrado na posicao:%d\n", cont);
            return;
        }
        cont ++;
    }
    printf("Valor nao encontrado\n");
}