#include <stdio.h>

int main() {
    unsigned long long S;
    scanf("%llu", &S);

    unsigned long long sum = 0;
    int N = 0;

    for (int i = 1; ; i++) {
        sum += i;
        if (sum > S) {
            N = i - 1;
            break;
        }
    }

    printf("%d\n", N);
}
