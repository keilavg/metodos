typedef struct arvore{
    char info;
    struct arvore* esq;
    struct arvore* dir;
}Arvore;

Arvore* cria(char c, Arvore*esq, Arvore* dir);
int vazia(Arvore* raiz);
void imprime(Arvore* raiz);
void libera(Arvore** raiz);
