#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

    if (n & 1 == 1) printf("impar\n");
    else printf("par\n");
    printf("%d\n", n << 1);
    printf("%d\n", n >> 1);

    return 0;
}