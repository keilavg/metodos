#include "servidor.h"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define N 1024

int main()
{
    int s_sock = inicializa_e_espera(7891);
    char buffer[N];
    recv(s_sock, buffer, N, 0);
    printf("Data received: %s",buffer);
    int periodo = 3;
#ifdef _WIN32
    u_long non_blocking = 1;
#endif // _WIN32

    time_t t_ini = time(NULL);
    while(1)
    {
#ifdef __linux__
        usleep(periodo*1000000);
#elif _WIN32
        sleep(periodo);
#endif // _WIN32
        strcpy(buffer, "oisumido\n");
        send(s_sock, buffer, strlen(buffer)+1, 0);
        printf("Enviada mensagem: %s", buffer);
#ifdef __linux__
        if (recv(s_sock, buffer, N, MSG_DONTWAIT) > 0)
#elif _WIN32
        // se no Windows, antes de recv, temos que alterar a configuracao do socket para
        // o modo non-blocking. se non_blocking == 1, o socket fica non-blocking.
        ioctlsocket(s_sock, FIONBIO, &non_blocking);
        if (recv(s_sock, buffer, N, 0) > 0)
#endif // _WIN32
        {
#ifdef _WIN32
            // se no Windows, depois de recv, podemos alterar novamente a configuracao do
            // socket para blocking. neste exemplo, isso nao eh estritamente necessario, mas
            // se quisermos que o socket funcione ora blocking, ora non-blocking, precisamos
            // chamar ioctlsocket para alterar essa configuracao.
            non_blocking = 0;
            ioctlsocket(s_sock, FIONBIO, &non_blocking);
#endif // _WIN32
            printf("Mensagem recebida: %s.", buffer);
        }

    }

    return 0;
}
