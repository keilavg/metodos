#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED

typedef struct lista{
    int info;
    struct lista* prox;
} Lista;

Lista* criaLista();

Lista* insere (Lista* ref, int valor);

void imprime(Lista* ref);

Lista* remove1(Lista* ref, int valor);

void libera (Lista** lista);

Lista* insereFim (Lista* lista, int valor);



#endif // FUNCOES_H_INCLUDED
