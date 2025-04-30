#include <stdio.h>

int main() {
    int n, stone[10001], i, a, b, queue[10001], front = 0, rear = 0, visited[10001] = {0}, count[10001] = {0};
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &stone[i]);
    }

    scanf("%d %d", &a, &b);


    queue[rear++] = a;
    visited[a] = 1;

    while (front < rear) {
        int now = queue[front++];
        int jump = stone[now];

        for (i = now - jump; i >= 1; i -= jump) {
            if (!visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
                count[i] = count[now] + 1;
            }
        }

        for (i = now + jump; i <= n; i += jump) {
            if (!visited[i]) {
                queue[rear++] = i;
                visited[i] = 1;
                count[i] = count[now] + 1;
            }
        }
    }

    if (visited[b]) {
        printf("%d\n", count[b]);
    } else {
        printf("-1\n");
    }

}
