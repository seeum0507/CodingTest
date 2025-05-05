#include <stdio.h>

int main() {
    int s, k;
    scanf("%d %d", &s, &k);

    int base = s / k, extra = s % k;
    long long result = 1;

    for (int i = 0; i < k; i++) {
        if (i < extra) {
            result *= (base + 1);
        } else {
            result *= base;
        }
    }

    printf("%lld\n", result);
}
