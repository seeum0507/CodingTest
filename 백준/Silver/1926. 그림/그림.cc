#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int map[500][500], visited[500][500] = {0}, i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &map[i][j]);
        }
    }

    int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1}, count = 0, max_size = 0, qx[250000], qy[250000], front, rear;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (map[i][j] == 1 && visited[i][j] == 0) {
                count++;
                int size = 1;
                visited[i][j] = 1;

                front = 0;
                rear = 0;
                qx[rear] = i;
                qy[rear] = j;
                rear++;

                while (front < rear) {
                    int x = qx[front];
                    int y = qy[front];
                    front++;

                    for (int d = 0; d < 4; d++) {
                        int nx = x + dx[d];
                        int ny = y + dy[d];

                        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                            if (map[nx][ny] == 1 && visited[nx][ny] == 0) {
                                visited[nx][ny] = 1;
                                qx[rear] = nx;
                                qy[rear] = ny;
                                rear++;
                                size++;
                            }
                        }
                    }
                }

                if (size > max_size) {
                    max_size = size;
                }
            }
        }
    }

    printf("%d\n%d\n", count, max_size);
}
