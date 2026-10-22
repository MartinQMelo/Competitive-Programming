#include <stdio.h>
#include <stdlib.h>

typedef struct no {
   int dado;
   struct no *esq, *dir;
} no;

void pre_ordem (no *raiz) {
    no *pilha[1000];
    int topo = -1;

    if (raiz == NULL) {
        return;
    }

    topo++;
    pilha[topo] = raiz;

    while (topo >= 0) {
        no *no_atual = pilha[topo];
        topo--;
        printf(" %d", no_atual->dado);

        if (no_atual->dir != NULL) {
            topo++;
            pilha[topo] = no_atual->dir;
        }

        if (no_atual->esq != NULL) {
            topo++;
            pilha[topo] = no_atual->esq;
        }
    }
}
