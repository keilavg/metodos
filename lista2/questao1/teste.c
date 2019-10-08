#include "pilha.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    Pilha* p;
    p = cria();
    pilha_vazia(p);
    push1(p, "keila\n");
    
    push1(p, "viana \n");
    imprime(p);

    pop(p);
    imprime(p);
    pop(p);
    imprime(p);
    libera(&p);
}
