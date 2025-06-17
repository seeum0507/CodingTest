#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long i, sum = 0;

    for (i = 1; i < n; i++) {
        sum += i * (n + 1);
    }

    printf("%lld\n", sum);
    return 0;
}
