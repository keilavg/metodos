#ifndef SERVIDOR_H_INCLUDED
#define SERVIDOR_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

#ifdef __linux__
#include <sys/socket.h>
#include <netinet/in.h>
#elif _WIN32
#include <winsock2.h>
#endif // __linux__

#define REQ_HA_DADOS_MSG "ha_dados"
#define REQ_QTDE_AFERICOES_MSG "qtde_afericoes"
#define REQ_DADOS_MSG "dados"
#define PORTA 1317

int inicializa_e_espera(uint16_t porta);

int req_ha_dados(int socket, char* req_ha_dados_msg);

int req_qtde_afericoes(int socket, char* req_qtde_afericoes_msg);

void req_dados(int socket, float* medida, size_t n, char* req_dados_msg);

float media(float* vec, size_t n);

double desvio(float* vec, int n, float media);
#endif // SERVIDOR_H_INCLUDED
