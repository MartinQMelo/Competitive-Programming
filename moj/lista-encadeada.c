#include <stdio.h>

typedef struct No {
    int dado;   
    struct No *prox;   
}No;

void inserir_no(No *inicio, int x); 

int main(void) {
    int n, x;
    scanf("%d", &n);

    No *inicio;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        inserir_no(inicio, x);
    }

    return 0;
}

void inserir_no(No *inicio, int x) {
    No *novo;
    novo->prox = inicio;
    novo->dado = x;

    inicio = novo;
}