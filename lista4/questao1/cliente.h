#ifndef CLIENTE_H_INCLUDED
#define CLIENTE_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <unistd.h>

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

int inicializa_e_conecta(uint16_t porta);

void envia_ha_dados(int socket, int valor);

void preenche_medida(float* vec, size_t n);

void envia_medida(int socket, float* vec, size_t n);

#endif // CLIENTE_H_INCLUDED
