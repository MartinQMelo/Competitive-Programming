#include <stdio.h>
#include <limits.h>

int main(void) {
    int n, maior = INT_MIN, menor = INT_MAX;
    long long sum = 0;
    scanf("%d", &n);
    int vet[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
        if (vet[i] > maior) maior = vet[i];
        if (vet[i] < menor) menor = vet[i];
        sum += vet[i];
    }
    printf("%d\n", maior);
    printf("%d\n", menor);
    printf("%.2f\n", (float)sum / n);

    return 0;
}
