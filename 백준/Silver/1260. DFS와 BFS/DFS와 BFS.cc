#include <stdio.h>

int n, m, v, g[1001][1001], visit[1001], q[10000], front = 0, rear = 0;

void dfs(int x) {
    int i;
    visit[x] = 1;
    printf("%d ", x);
    for (i = 1; i <= n; i++) {
        if (g[x][i] == 1 && visit[i] == 0) {
            dfs(i);
        }
    }
}

int main() {
    int i, a, b;
    
    scanf("%d %d %d", &n, &m, &v);
    
    for (i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        g[a][b] = 1;
        g[b][a] = 1;
    }

    dfs(v);
    printf("\n");

    for (i = 1; i <= n; i++) visit[i] = 0;

    front = 0; rear = 0;
    q[rear++] = v;
    visit[v] = 1;

    while (front < rear) {
        int x = q[front++];
        printf("%d ", x);
        for (i = 1; i <= n; i++) {
            if (g[x][i] == 1 && visit[i] == 0) {
                q[rear++] = i;
                visit[i] = 1;
            }
        }
    }

}
