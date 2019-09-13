#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
    Lista* l;
    l = criaLista();
    l = insere(l,10);
    l = insere(l, 5);
    l = insere(l, 3);
    imprime(l);
    l = remove1(l, 7);
    insereFim(l, 2);
    imprime(l);
    libera(l);

    return 0;

}
