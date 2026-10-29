#include <stddef.h>
#include <stdlib.h>

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;

void remove_depois (celula *p) {
    if (p != NULL) {
        celula *proximo = p->prox;
        if (proximo != NULL) {
            p->prox = proximo->prox;
            free(proximo);
        }
    }
}

void remove_elemento (celula *le, int x) {
    celula *atual = le;

    while (atual->prox != NULL && atual->prox->dado != x) {
        atual = atual->prox;
    }

    if (atual->prox != NULL) {
    celula *proximo = atual->prox;
    atual->prox = proximo->prox;
    free(proximo);
    }
}
    
void remove_todos_elementos (celula *le, int x) {
    celula *atual = le;
    while (atual->prox != NULL) {
        if (atual->prox->dado == x) {
            celula *proximo = atual->prox;
            atual->prox = proximo->prox;
            free(proximo);
        }
        else {
            atual = atual->prox;
        }
    }
}