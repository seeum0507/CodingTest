#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long map[500][500];
    int zero_i = -1, zero_j = -1;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lld", &map[i][j]);
            if (map[i][j] == 0) {
                zero_i = i;
                zero_j = j;
            }
        }
    }

    if (n == 1) {
        printf("1\n");
        return 0;
    }

    long long row_sum[500] = {0}, col_sum[500] = {0}, diag1 = 0, diag2 = 0, target = -1;

    for (int i = 0; i < n; i++) {
        if (i != zero_i) {
            long long temp = 0;
            for (int j = 0; j < n; j++) {
                temp += map[i][j];
            }
            target = temp;
            break;
        }
    }

    long long zero_row_sum = 0;
    for (int j = 0; j < n; j++) {
        zero_row_sum += map[zero_i][j];
    }

    long long m = target - zero_row_sum;
    if (m <= 0) {
        printf("-1\n");
        return 0;
    }

    map[zero_i][zero_j] = m;

    for (int i = 0; i < n; i++) {
        long long sum = 0;
        for (int j = 0; j < n; j++) {
            sum += map[i][j];
        }
        if (sum != target) {
            printf("-1\n");
            return 0;
        }
    }

    for (int j = 0; j < n; j++) {
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += map[i][j];
        }
        if (sum != target) {
            printf("-1\n");
            return 0;
        }
    }

    long long sum1 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += map[i][i];
    }
    if (sum1 != target) {
        printf("-1\n");
        return 0;
    }

    long long sum2 = 0;
    for (int i = 0; i < n; i++) {
        sum2 += map[i][n - 1 - i];
    }
    if (sum2 != target) {
        printf("-1\n");
        return 0;
    }

    printf("%lld\n", m);
}
