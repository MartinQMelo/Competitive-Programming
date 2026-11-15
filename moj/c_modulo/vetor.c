#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int vet[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }

    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", vet[i]);
    }
    printf("\n");
}