#include <stdio.h>

int main() {
    int T, N, count = 0;
    scanf("%d", &T);

    while (T--) {
        scanf("%d", &N);

        for (int i = 2; i * i <= N; i++) {
            while (N % i == 0) {
                N /= i;
                count++;
            }
            if (count > 0) {
                printf("%d %d\n", i, count);
            }
        }
        if (N > 1) {
            printf("%d %d\n", N, 1);
        }
    }
}
