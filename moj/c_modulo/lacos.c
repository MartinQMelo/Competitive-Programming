#include <stdio.h>

int main(void) {
    int n;
    long long sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    printf("%lld\n", sum);
}