typedef struct lista{
    int info;
    struct lista* prox;
}Lista;

typedef struct fila{
    Lista* frente;
    Lista* fundo;
}Fila;

Fila* cria();
int fila_vazia(Fila* f);
void inserir (Fila* f, int v);
void remover(Fila* f);
void imprime(Fila* f);
void libera(Fila** f);
void posicao(Fila*f);
