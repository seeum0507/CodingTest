#include<stdio.h>
int main() {
    long long n, m, result;
    scanf("%lld %lld", &n, &m);
    result = n - m;
    (result < 0) ? result = -result : result;
    printf("%lld", result);
}