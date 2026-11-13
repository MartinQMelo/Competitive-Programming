#include <stdio.h>

int main(void) {
    int s;
    scanf("%d", &s);

    int horas = s/3600;
    s = s%3600;
    int min = s/60;
    s = s%60;

    printf("%d %d %d", horas, min, s);

    return 0;
}