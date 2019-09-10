#include <stdio.h>
#include <stdlib.h>

/*criar uma calculadora que efetua as 4 operações.(soma, subtração, divisão, multiplicação)
-> o usuario vai informar a operação e inserir dois valores. 
-> deve existir uma opção na tela para finalizar a calculadora.
-> cada operação deve ser uma função diferente.
-> mensagem de erro caso o denominador seja zero. */

float soma(float elemento1, float elemento2){
    float soma;
    soma = elemento1 + elemento2;
    return soma;
}

float subtracao(float elemento1, float elemento2){
    float subtracao;
    subtracao = elemento1 - elemento2;
    return subtracao;
}

float multiplicacao(float elemento1, float elemento2){
    float multiplicacao;
    multiplicacao = elemento1 * elemento2;
    return multiplicacao;
}

float divisao(float dividendo, float divisor){
    float divisao;
    divisao = (dividendo / divisor);
    return divisao;
}

int main(){
    int resp, ;
    float elemento1, elemento2, divivendo, divisor;
    
}