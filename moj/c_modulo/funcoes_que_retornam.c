#include <stdio.h>

int quadrado(int x) {
    return x * x;
}

int main(void) {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d\n", quadrado(i));
    }


    return 0;
}