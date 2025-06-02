#include <stdio.h>

int main() {
    int n, i, j, x[5000], c[5000], sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &x[i], &c[i]);
    }

    for (i = 0; i < n; i++) {
        int min = 1000000;
        for (j = 0; j < n; j++) {
            if (i == j) continue;
            if (c[i] == c[j]) {
                int d = x[i] - x[j];
                if (d < 0) d = -d;
                if (d < min) min = d;
            }
        }
        sum += min;
    }

    printf("%d\n", sum);
}
