#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);

    if (a % 4 == 0) {
        if (a % 400 == 0) {
            printf("bissexto\n");
        }
        else if (a % 100 == 0) {
            printf("comum\n");
        }
        else {
            printf("bissexto\n");
        }
    }
    else {
        printf("comum\n");
    }

    return 0;
}
