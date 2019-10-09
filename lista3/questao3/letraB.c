#include <stdio.h>
#include <stdlib.h>

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

void insercao (float* v, int n_componentes){
    int i, j;
    float dado;

    for (i = 1; i < n_componentes; i++){
        dado = v[i];
        for (j = i - 1; j >= 0 && v[j]> dado; j --){
            v[j+1] = v[j];
        }
        v[j+1] = dado; 
    }
    for (i=0; i < n_componentes; i++){
    printf("%f  ", v[i]);}
}

int main(){
    printf("°°°°°°°°°°°°°°°°°°°°°°°°ORDENAÇÃO POR INSERSAO°°°°°°°°°°°°°°°°°°°°°°°°\n");
    int i, n_componentes;
    float *vet;

    printf("Digite o numero de componentes no vetor: \n");
    scanf("%d", &n_componentes);
    vet = vetor(n_componentes);

    for(i=0; i < n_componentes; i++){
        printf("%.2f\n", vet[i]);
    }
    insercao(vet, n_componentes);
}