#include <stdio.h>

int main() {
    int T, Z = 0;, wheel[100], X = 0, Y = 0, count = 0, N, M, digit;
    scanf("%d", &T);

    while (T--) {

        scanf("%d %d", &N, &M);

        for (int i = 0; i < M; i++) {
            scanf("%d", &digit);
            X = X * 10 + digit;
        }

        for (int i = 0; i < M; i++) {
            int digit;
            scanf("%d", &digit);
            Y = Y * 10 + digit;
        }

        for (int i = 0; i < N; i++) {
            scanf("%d", &wheel[i]);
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                Z = Z * 10 + wheel[(i + j) % N];
            }
            if (X <= Z && Z <= Y) {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}
