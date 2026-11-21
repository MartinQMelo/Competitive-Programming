#include <stdio.h> 

int main(void) {
    int x = 5;
    scanf("%d", &x);
    int *p = &x;

    printf("%d\n", *p);
    *p = *p * 2;
    printf("%d\n", *p);

}