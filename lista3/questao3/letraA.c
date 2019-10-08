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

void selecao (float *v, int n_componentes){
    float aux;

    int i, j, max, min;
    for (i =0; i < n_componentes; i++){
        min =i;
        for(j = i+ 1; j< n_componentes; j++){
            if (v[j]<v[i]){
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

int main(){
    int i, n_componentes;
    float *vet;

    printf("Digite o numero de componentes no vetor: \n");
    scanf("%d", &n_componentes);
    vet = vetor(n_componentes);

    for(i=0; i < n_componentes; i++){
        printf("%.2f\n", vet[i]);
    }
    selecao(vet, n_componentes);
}
