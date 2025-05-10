#include <stdio.h>

int main() {
    long long n, m;
    scanf("%lld %lld", &n, &m);

    long long a = n, b = m, c = n - m, count2 = 0, count5 = 0;


    for (long long i = 2; i <= a; i *= 2)
        count2 += a / i;
    for (long long i = 2; i <= b; i *= 2)
        count2 -= b / i;
    for (long long i = 2; i <= c; i *= 2)
        count2 -= c / i;

    for (long long i = 5; i <= a; i *= 5)
        count5 += a / i;
    for (long long i = 5; i <= b; i *= 5)
        count5 -= b / i;
    for (long long i = 5; i <= c; i *= 5)
        count5 -= c / i;

    if (count2 < count5)
        printf("%lld\n", count2);
    else
        printf("%lld\n", count5);
}
