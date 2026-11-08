#include <stdio.h>
#include <string.h>

int main(void) {
    int len;
    scanf("%d", &len);
    getchar();

    char palavra[len + 1];
    fgets(palavra, sizeof(palavra), stdin);
    int i = 0, j = len - 1;

    while (i < len/2) {
        if (palavra[i] != palavra[j]) {
            printf("0\n");
            return 0;
        }
        i++;
        j--;
    }
    printf("1\n");
    return 0;
}