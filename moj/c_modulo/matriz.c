#include <stdio.h>

int main(void) {
    int l, c, temp;
    scanf("%d %d", &l, &c);

    int sum[l];
    for (int i = 0; i < l; i++) {
        sum[i] = 0;
    }


    for (int i = 0; i < l; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &temp);
            sum[i] += temp;
        }
    }

    for (int i = 0; i < l; i++) {
        printf("%d\n", sum[i]);
    }
}