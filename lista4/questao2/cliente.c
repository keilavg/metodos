#include "cliente.h"

int inicializa_e_conecta(uint16_t porta)
{
  int clientSocket;
  struct sockaddr_in serverAddr;

#ifdef __linux__
  socklen_t addr_size;
#elif _WIN32
  WSADATA wsaData;
  int addr_size;

  if (WSAStartup(MAKEWORD(2, 0), &wsaData) != 0)
  {
      printf("Erro de versao do WSocket!\n");
      exit(1);
  }
#endif // _WIN32

  clientSocket = socket(PF_INET, SOCK_STREAM, 0);

  serverAddr.sin_family = AF_INET;
  serverAddr.sin_port = htons(porta);
  serverAddr.sin_addr.s_addr = inet_addr("127.0.0.1");
  memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);

  addr_size = sizeof serverAddr;
  connect(clientSocket, (struct sockaddr *) &serverAddr, addr_size);

  return clientSocket;
}
