/*API - Application Programming Interface).*/

struct lista{
    int info;
    struct lista* prox;
}typedef Lista; 

Lista* criaLista();

Lista* insere(Lista * ref, int valor);

void imprime (Lista* ref);

Lista* remove(Lista * ref, int valor);

void libera(Lista* lista);

