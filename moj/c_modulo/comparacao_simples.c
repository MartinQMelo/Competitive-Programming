#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == b) printf("iguais\n");
    else if (a > b) printf("%d", a);
    else printf("%d", b);
    return 0;
}
