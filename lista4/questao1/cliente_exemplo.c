#include "cliente.h"
#include <string.h>
#define N 1024

int main()
{
  int c_socket = inicializa_e_conecta(7891);
  char buffer[N];
  strcpy(buffer,"Hello World\n");
  send(c_socket,buffer,strlen(buffer)+1,0);

#ifdef _WIN32
  u_long non_blocking = 1;
#endif // _WIN32

  while (1)
  {
      if (recv(c_socket, buffer, N, 0) > 0)
      {
          if (strcmp(buffer, "oisumido\n") == 0)
          {
              printf("Mensagem recebida: %s", buffer);
              strcpy(buffer, "sumido eh voce!\n");
              send(c_socket, buffer, strlen(buffer)+1, 0);
              printf("Mensagem enviada: %s", buffer);
          }
      }
  }

  return 0;
}
