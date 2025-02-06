#include <stdio.h>

int main() {
    int n, m, i, j, k, a, b, count = 0, bad[201][201] = { 0 };

    scanf("%d %d", &n, &m);

    for (i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        bad[a][b] = bad[b][a] = 1;
    }

    for (i = 1; i <= n; i++) {
        for (j = i + 1; j <= n; j++) {
            if (bad[i][j]) continue;

            for (k = j + 1; k <= n; k++) {
                if (!bad[i][k] && !bad[j][k]) {
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);
}
