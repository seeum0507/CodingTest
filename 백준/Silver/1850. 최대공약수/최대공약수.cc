#include <stdio.h>

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);

    long long x = a, y = b, t;
    while (y != 0) {
        t = x % y;
        x = y;
        y = t;
    }

    for (long long i = 0; i < x; i++) {
        putchar('1');
    }
    putchar('\n');
    return 0;
}
