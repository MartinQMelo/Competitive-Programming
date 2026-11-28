#include <stdio.h>

typedef struct no {
   int chave;
   struct no *esq, *dir;
} no;

int altura(no *r) {
    if (r == NULL) return 0;
    int esq = altura(r->esq);
    int dir = altura(r->dir);
    return (esq > dir ? esq : dir) + 1;
}