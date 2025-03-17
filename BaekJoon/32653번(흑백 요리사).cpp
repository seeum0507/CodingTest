#include <stdio.h>

int main() {
    int n;
    long long time, x;
    scanf("%d", &n);

    scanf("%lld", &time);

    for (int i = 1; i < n; i++) {
        scanf("%lld", &x);
        long long a = time, b = x;
        while (b) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        time = (time / a) * x;
    }

    printf("%lld\n", time * 2);
}