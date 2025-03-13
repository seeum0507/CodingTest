#include <stdio.h>

int main() {
    int N, MOD = 1000000007, row, col, i, j, k, mat1[50][50], mat2[50][50], result[50][50], sum = 0, new_row, new_col;

    scanf("%d", &N);

    scanf("%d %d", &row, &col);

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    for (int n = 1; n < N; n++) {
        scanf("%d %d", &new_row, &new_col);

        if (col != new_row) {
            printf("-1\n");
            return 0;
        }

        for (i = 0; i < new_row; i++) {
            for (j = 0; j < new_col; j++) {
                scanf("%d", &mat2[i][j]);
            }
        }

        for (i = 0; i < row; i++) {
            for (j = 0; j < new_col; j++) {
                result[i][j] = 0;
                for (k = 0; k < col; k++) {
                    result[i][j] = (result[i][j] + (long long)mat1[i][k] * mat2[k][j]) % MOD;
                }
            }
        }

        col = new_col;
        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                mat1[i][j] = result[i][j];
            }
        }
    }

    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            sum = (sum + mat1[i][j]) % MOD;
        }
    }

    printf("%d", sum);
}
