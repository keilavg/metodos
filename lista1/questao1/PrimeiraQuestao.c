#include <stdio.h>
#include <stdlib.h>
//alocar dinamicamente uma matriz de duas dimensoes.
/*requisitar ao usuario a qtd de linha e colunas
os elementos irão receber a diferença entre os indices (linha - coluna)
- por fim uma função que imprime na tela a matriz. Após a impressão, liberar todo espaço ocupado.*/

void FuncaoImprime (int **matriz,int nLinha, int nColuna ){
    int i, j;
    for(i = 0; i < nLinha; i ++){
        for (j= 0; j < nColuna; j ++){
            printf("%d ", matriz[i][j]);
        }
      printf("\n");  
    }
}
int main(){
    int **matriz;
    int nColuna, nLinha, i, j;
    int resp;
    printf ("\nDigite da quantidade de linhas para a matriz:\n");
    scanf("%d", &nLinha);
    printf("\nDigite o numero desejado para o numero de colunas:\n");
    scanf("%d", &nColuna);

    matriz = (int **)malloc(nLinha * sizeof(int*));
    for (i = 0; i< nLinha; i ++){
        matriz[i] = (int *)malloc(nColuna * sizeof(int));
        for (j = 0; j < nColuna; j ++){
            matriz[i][j] = (i - j);
        }
    }
    printf ("Voce deseja visualizar a matriz? S = 1/N = 0\n");
    scanf("%d", &resp);
    if(resp == 1){
        FuncaoImprime(matriz, nLinha, nColuna);
    }else{
        for(i = 0; i< nLinha; i ++){
            free(matriz[i]);
        }
        free(matriz);
        return 0;
    }

    if (resp == 1){
        for(i = 0; i< nLinha; i ++){
            free(matriz[i]);
        }
        free(matriz);
        return 0;
    }

}