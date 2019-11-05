#include <stdio.h>
#include <stdlib.h>
int contTrocaS, contCompS, contTrocaI, contCompI;

float *vetor (int n_componentes){
    float * v;
    int i;
    v = (float*)malloc( sizeof(float)* n_componentes);
    for(i = 0; i < n_componentes; i ++){
        printf("Digite valor do elemento %d: \n", i +1);
        scanf("%f", & v[i]);
    }
    return v;
}

void selecao (float *v, int n_componentes){
    float aux;

    int i, j, max, min;
    for (i =0; i < n_componentes; i++){
        min =i;
        contCompS ++;
        for(j = i+ 1; j< n_componentes; j++){
            contCompS ++;
            if (v[j]<v[i]){
                contCompS ++;
                contTrocaS ++;
                min =j;
            }
        }
        aux =v[i];
        v[i] = v[min];
        v [min]=aux;
    }
    for (i=0; i < n_componentes; i++){
    printf("%f  ", v[i]);}

}


void insercao (float* v, int n_componentes){
    int i, j;
    float dado;

    for (i = 1; i < n_componentes; i++){
        contCompI ++;
        dado = v[i];
        for (j = i - 1; j >= 0 && v[j]> dado; j --){
            contCompI ++;
            contTrocaI++;
            v[j+1] = v[j];
        }
        v[j+1] = dado; 
    } contTrocaI++;
    for (i=0; i < n_componentes; i++){
    printf("%f  ", v[i]);}
}

int main(){
    printf("°°°°°°°°°°°°°°°°°°°°°°°°ORDENAÇÃO POR SELEÇÃO°°°°°°°°°°°°°°°°°°°°°°°°\n");
    int i, n_componentes;
    float *vet;

    printf("Digite o numero de componentes no vetor: \n");
    scanf("%d", &n_componentes);
    vet = vetor(n_componentes);

    for(i=0; i < n_componentes; i++){
        printf("%.2f\n", vet[i]);
    }
    selecao(vet, n_componentes);

    printf("Quantidade de comparações %d, quantidade de trocas %d da seleção", contCompS, contTrocaS);

    printf("\n°°°°°°°°°°°°°°°°°°°°°°°°ORDENAÇÃO POR INSERSAO°°°°°°°°°°°°°°°°°°°°°°°°\n");

    insercao(vet, n_componentes);
    printf("Quantidade de comparações %d, quantidade de trocas %d da inserção ", contCompI, contTrocaI);
}
