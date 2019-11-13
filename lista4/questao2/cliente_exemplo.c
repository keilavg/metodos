#include "cliente.h"
#include <string.h>
#define N 10
#define X 100

int main()
{
  int c_socket = inicializa_e_conecta(7891);
  int vec[N];
  char mensagem[X];
  strcpy(mensagem,"Conexão estabelecida\n");
  send(c_socket, mensagem , strlen(mensagem)+1, 0);
  
  while (1)
  {
      usleep(3*1000000);
      recv(c_socket, vec, sizeof(vec), 0);
      printf("\nMensagem recebida: ");
      for (int i = 0; i < N; i++){
        printf("%d  ", vec[i]);
      }
           

  }        
          
      


  return 0;
}
