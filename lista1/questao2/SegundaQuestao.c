#include <stdio.h>
#include <stdlib.h>

/*criar uma calculadora que efetua as 4 operações.(soma, subtração, divisão, multiplicação)
-> o usuario vai informar a operação e inserir dois valores. 
-> deve existir uma opção na tela para finalizar a calculadora.
-> cada operação deve ser uma função diferente.
-> mensagem de erro caso o denominador seja zero. */

float FuncaoSoma(float elemento1, float elemento2){
    float soma;
    soma = (elemento1 + elemento2);
    return (soma);
}

float FuncaoSub(float elemento1, float elemento2){
    float subtracao;
    subtracao = (elemento1 - elemento2);
    return (subtracao);
}

float FuncaoMulti(float elemento1, float elemento2){
    float multiplicacao;
    multiplicacao = (elemento1 * elemento2);
    return (multiplicacao);
}

float Funcaodiv(float dividendo, float divisor){
    float divisao;
    divisao = (dividendo / divisor);
    return divisao;
}

int main(){
    int resp ;
    float valor1, valor2, dividendo, divisor, resultado;
    do{     
    printf("\nSoma - 1\n Subtracao - 2\n Multiplicacao - 3\n Divisao - 4\n Finalizar Calculadora - 0\n");
    scanf("%d", &resp);
        if(resp==4){
        do{
            printf("Digite o valor do dividendo:");
            scanf("%f", &dividendo);
            printf("Digite um valor para o divisor tal que esse seja diferente de 0:");
            scanf("%f", &divisor);
            if (divisor == 0){
                printf("ERRO!");
            }
        }while(divisor==0);
        resultado = Funcaodiv(dividendo, divisor);
        printf("O resultado da Divisao e: %.2f\n", resultado);
        }else if(resp == 1){
                printf("Digite o valor 1:\n");
                scanf("%f", &valor1);
                printf("Digite o valor 2\n");
                scanf("%f", &valor2);
                resultado = FuncaoSoma(valor1, valor2);
                printf("O resultado da soma e: %.2f\n", resultado);
        }else if(resp == 2){
                printf("Digite o valor 1:\n");
                scanf("%f", &valor1);
                printf("Digite o valor 2\n");
                scanf("%f", &valor2);
                resultado = FuncaoSub(valor1, valor2);
                printf("O resultado da subtracao e: %.2f\n", resultado);
        }else if(resp == 3){
                printf("Digite o valor 1:\n");
                scanf("%f", &valor1);
                printf("Digite o valor 2\n");
                scanf("%f", &valor2);
                resultado = FuncaoMulti(valor1, valor2);
                printf("O resultado da Multiplicacao e: %.2f\n", resultado);
        }

    } while (resp != 0);
    

    }
    

