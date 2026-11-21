#include <stdio.h>

int main(void) {
    int n;
    long long sum = 0;
    scanf("%d", &n);
    int nums[n];

    for (int p = 0; p < n; p++) {
        scanf("%d", (nums + p));
        sum += *(nums + p);
    }
    printf("%lld\n", sum);
}   