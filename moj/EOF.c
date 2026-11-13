#include <stdio.h>

int main(void) {
    int total = 0, num;
    while (1) {
        if (scanf("%d", &num) >= 1 )
        total++;
    }
    printf("%d", total);
}

