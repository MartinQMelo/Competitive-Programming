#include <stdio.h>

int main(void) {
    char s[100];
    scanf("%s", s);

    char* p = s;
    int count = 0;
    while (*p != '\0') {
        count++;
        p++;
    }

    char coppy[count + 1];
    for (int i = 0; i < count; i++) {
        coppy[i] = s[count - i - 1];
    }
    coppy[count] = '\0';

    printf("%d\n", count);
    printf("%s\n", coppy);
}