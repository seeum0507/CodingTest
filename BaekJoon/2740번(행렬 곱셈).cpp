#include <stdio.h>

int main() {
    int n, m, k, a[100][100], b[100][100], result[100][100] = { 0 };

    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &m, &k);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int l = 0; l < m; l++) {
                result[i][j] += a[i][l] * b[l][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}