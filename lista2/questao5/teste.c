#include "arvore.c"
#include <stdlib.h>
#include <stdio.h>

int main(){
    
    Arvore* x = cria('a', NULL, NULL);
    Arvore* y = cria('b', NULL, NULL);
    Arvore* z = cria('c', x, y);
    
    imprime(z);
    
 
    Arvore* w = cria('w', y, x);
    imprime(w);
    z= vazia(z);
    w= vazia(w);
    if(vazia(z)){
        printf("Nó vazio!\n");
    }
    if(vazia(w)){
        printf("Nó vazio!\n");
    }
    imprime(w);
    libera(&z);
    libera(&w);

    
}

