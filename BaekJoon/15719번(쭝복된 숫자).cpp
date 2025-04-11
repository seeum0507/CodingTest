#include <stdio.h>

int main() {
    int n, x
    scanf("%d", &n);

    long long input_sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        input_sum += x;
    }

    long long expected_sum = (long long)(n - 1) * n / 2;
    printf("%lld\n", input_sum - expected_sum);
}
