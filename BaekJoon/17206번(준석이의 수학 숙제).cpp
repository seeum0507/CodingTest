#include <stdio.h>

int main() {
    int T, N[100000];
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &N[i]);
    }

    for (int i = 0; i < T; i++) {
        int n = N[i], k3 = n / 3, k7 = n / 7, k21 = n / 21;
        long long sum = 0;

        sum += (long long)3 * k3 * (k3 + 1) / 2;

        sum += (long long)7 * k7 * (k7 + 1) / 2;

        sum -= (long long)21 * k21 * (k21 + 1) / 2;

        printf("%lld\n", sum);
    }

}
