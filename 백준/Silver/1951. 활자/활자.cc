#include <stdio.h>

int main() {
    long long N;
    scanf("%lld", &N);

    long long digit = 1, start = 1, end = 9, total_chars = 0;
    const int MOD = 1234567;

    while (end < N) {
        total_chars = (total_chars + (end - start + 1) * digit) % MOD;
        start *= 10;
        end = end * 10 + 9;
        digit++;
    }

    total_chars = (total_chars + (N - start + 1) * digit) % MOD;

    printf("%lld\n", total_chars);
    return 0;
}
