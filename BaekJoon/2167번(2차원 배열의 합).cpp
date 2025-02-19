#include <stdio.h>

int main() {
    int N, M, K, prefix[301][301] = { 0 }, arr[301][301] = { 0 };

    scanf("%d %d", &N, &M);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            scanf("%d", &arr[i][j]);
            prefix[i][j] = arr[i][j] + prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1];
        }
    }

    scanf("%d", &K);

    for (int q = 0; q < K; q++) {
        int i, j, x, y;
        scanf("%d %d %d %d", &i, &j, &x, &y);
        int result = prefix[x][y] - prefix[i - 1][y] - prefix[x][j - 1] + prefix[i - 1][j - 1];
        printf("%d\n", result);
    }
}
