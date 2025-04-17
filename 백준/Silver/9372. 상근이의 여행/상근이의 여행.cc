#include <stdio.h>

int main() {
    int T, N, M, a, b, i, j;
    scanf("%d", &T);

    for (i = 0; i < T; i++) {
        scanf("%d %d", &N, &M);
        for (j = 0; j < M; j++) {
            scanf("%d %d", &a, &b);
        }
        printf("%d\n", N - 1);
    }

    return 0;
}
