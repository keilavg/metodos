#include "arvore.c"
#include <stdlib.h>
#include <stdio.h>

int main(){
    
    Arvore* x = cria('a', NULL, NULL);
    Arvore* y = cria('b', NULL, NULL);
    Arvore* z = cria('c', x, y);
    vazia(z);
    imprime(z);
    imprime(x);
 
    Arvore* w = cria('w', y, x);
    imprime(w);
    libera(&z);
    libera(&w);

    
}

