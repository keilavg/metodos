#include "pilha.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// adição da função que retorna a quantidade de itens na pilha.
int main()
{

    Pilha* p;
    p = cria();
    pilha_vazia(p);
    push1(p, "keila\n");
    
    push1(p, "viana \n");
    qntElementos(p);
    imprime(p);

    pop(p);
    imprime(p);
    pop(p);
    imprime(p);
    qntElementos(p);
}
