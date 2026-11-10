#include <stdio.h>

int main(void) {
    int n, sum = 0, container;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &container);
        sum += container;
    }

    printf("Carga total: %d kilogramas", sum);
}