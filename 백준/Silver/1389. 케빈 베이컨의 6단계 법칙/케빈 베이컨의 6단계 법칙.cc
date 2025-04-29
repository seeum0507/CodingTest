#include <stdio.h>

int main() {
    int n, m, a, b, i, j, k, inf = 1000000, graph[101][101];

    scanf("%d %d", &n, &m);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (i == j)
                graph[i][j] = 0;
            else
                graph[i][j] = inf;
        }
    }

    for (i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    for (k = 1; k <= n; k++) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= n; j++) {
                if (graph[i][j] > graph[i][k] + graph[k][j]) {
                    graph[i][j] = graph[i][k] + graph[k][j];
                }
            }
        }
    }

    int min_sum = inf, result = 0;

    for (i = 1; i <= n; i++) {
        int sum = 0;
        for (j = 1; j <= n; j++) {
            sum += graph[i][j];
        }

        if (sum < min_sum) {
            min_sum = sum;
            result = i;
        }
    }

    printf("%d\n", result);
}
