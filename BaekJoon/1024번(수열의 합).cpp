#include <stdio.h>

int main() {
    long long n;
    int l;
    scanf("%lld %d", &n, &l);

    for (int k = l; k <= 100; k++) {
        long long temp = n - (long long)k * (k - 1) / 2;
        if (temp < 0) break;
        if (temp % k == 0) {
            long long x = temp / k;
            for (int i = 0; i < k; i++) {
                printf("%lld ", x + i);
            }
            printf("\n");
            return 0;
        }
    }

    printf("-1\n");
}
