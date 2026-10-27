#include <stdio.h>
#include <stdlib.h>

typedef struct no {
   int dado;
   struct no *esq, *dir;
} no;

void em_ordem (no *raiz) {
    no *pilha[1000];
    int topo = -1;
    no *no_atual = raiz;

    if (raiz == NULL) {
        return;
    }

    topo++;
    pilha[topo] = raiz;

    while (topo >= 0 || atual != NULL) {

        if (no_atual->esq != NULL) {
            topo++;
            pilha[topo] = no_atual->esq;
        }
    }
}