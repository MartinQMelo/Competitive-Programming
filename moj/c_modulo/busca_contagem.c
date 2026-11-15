#include <stdio.h> 

int main(void) {
    int n, x, sum = 0, first = -1;
    scanf("%d", &n);
    int vet[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    }
    scanf("%d", &x);

    for (int i = 0; i < n; i++) {
        if (vet[i] == x) {
            sum++;
            if (first == -1) {
                first = i + 1;
            }
        }
    }

    printf("%d\n", sum);
    printf("%d\n", first);

    
    return 0;
}