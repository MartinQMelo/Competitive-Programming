#include <stdio.h>

int main(void) {
    int n, diagonal_primaria = 0, diagonal_ssecundaria = 0;
    scanf("%d", &n);
    int matriz[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        diagonal_primaria += matriz[i][i];
    }

    for (int i = 0; i < n; i++) {
        diagonal_ssecundaria += matriz[i][n - i - 1];
    }

    printf("%d\n", diagonal_primaria);
    printf("%d\n", diagonal_ssecundaria);
}