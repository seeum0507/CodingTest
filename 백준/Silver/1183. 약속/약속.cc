#include <stdio.h>

int main() {
    int n;
    long long a[55], b[55], diff[55], left, right;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%lld %lld", &a[i], &b[i]);
        diff[i] = b[i] - a[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (diff[j] > diff[j + 1]) {
                long long temp = diff[j];
                diff[j] = diff[j + 1];
                diff[j + 1] = temp;
            }
        }
    }

    if (n % 2 == 1) {
        left = right = diff[n / 2];
    } else {
        left = diff[n / 2 - 1];
        right = diff[n / 2];
    }

    printf("%lld\n", right - left + 1);

    return 0;
}
