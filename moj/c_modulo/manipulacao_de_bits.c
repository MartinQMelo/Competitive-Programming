#include <stdio.h>

int main(void) {
    int n;
    int uns = 0;
    scanf("%d", &n);

    while (n > 0) {
    uns += n & 1;   /* conta o bit menos significativo */
    n >>= 1;          /* descarta esse bit */
    }
    printf("%d\n", uns);
    if (uns == 1) printf("potencia\n");
    else printf("nao\n");
    return 0;
}
