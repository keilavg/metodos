#include "servidor.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define N 10
#define X 100

int main()
{
    int s_sock = inicializa_e_espera(7891);
    int vec[N];
    char mensagem [X];

    recv(s_sock, mensagem, X, 0);
    printf("mensagem:%s\n", mensagem);
    
    
    int periodo = 3;

  
    send(s_sock, vec, sizeof(vec), 0); 
    
    while(1)
    {   
        usleep(periodo*1000000);
        srand(time(NULL));
         for (int i = 0; i<N; i++){
            vec[i]= rand() % 99-0;
         }
        
        send(s_sock, vec, sizeof(vec), 0);
        printf("\nmensagem enviada:");
        for(int i = 0; i<N; i++){
            printf("%d  ", vec[i]);
        }
       
    }

    return 0;
}
