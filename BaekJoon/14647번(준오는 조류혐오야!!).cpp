#include <stdio.h>

int main() {
    int n, m, i, j, bingo[500][500], total_9 = 0, max_9 = 0;

    scanf("%d %d", &n, &m);

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &bingo[i][j]);
            int num = bingo[i][j];
            while (num > 0) {
                if (num % 10 == 9) total_9++;
                num /= 10;
            }
        }
    }

    for (i = 0; i < n; i++) {
        int row_9 = 0;
        for (j = 0; j < m; j++) {
            int num = bingo[i][j];
            while (num > 0) {
                if (num % 10 == 9) row_9++;
                num /= 10;
            }
        }
        if (row_9 > max_9) max_9 = row_9;
    }

    for (j = 0; j < m; j++) {
        int col_9 = 0;
        for (i = 0; i < n; i++) {
            int num = bingo[i][j];
            while (num > 0) {
                if (num % 10 == 9) col_9++;
                num /= 10;
            }
        }
        if (col_9 > max_9) max_9 = col_9;
    }

    printf("%d\n", total_9 - max_9);
}
