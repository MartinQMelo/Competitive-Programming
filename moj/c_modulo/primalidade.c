#include <stdio.h>

int ehPrimo(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    int n, sum = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        sum += ehPrimo(i);
    }
    printf("%d\n", sum);
}