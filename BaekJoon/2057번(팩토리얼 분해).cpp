#include <stdio.h>


long long fact[20];

int main() {
    fact[0] = 1;

    for (long long i = 1; i < 20; i++) {
        fact[i] = fact[i - 1] * i;
    }

    long long N;
    scanf("%lld", &N);

    if (N == 0) {
        printf("NO");
    }
    else {
        for (int i = 19; i >= 0; i--) {
            if (N >= fact[i]) {
                N -= fact[i];
            }
        }
        if (N) {
            printf("NO");
        }
        else {
            printf("YES");
        }
    }

    return 0;
}
