#include "fila.c"
#include <stdio.h>
#include <stdlib.h>

int main(){
    Fila * f;
    f = cria();
    fila_vazia(f);
    inserir(f, 2);
    inserir(f, 4);
    inserir(f,8);
    imprime(f);
    remover(f);
    imprime(f);
    remover(f);
    remover(f);
    imprime(f);
    libera(&f);
}