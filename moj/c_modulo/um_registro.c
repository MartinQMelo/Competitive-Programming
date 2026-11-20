#include <stdio.h>

struct Ponto{
    int x, y;
};

int main(void) {
    struct Ponto p;
    scanf("%d %d", &p.x, &p.y);

    printf("%d %d\n", p.x, p.y);
    printf("%d\n", p.x + p.y);

}
