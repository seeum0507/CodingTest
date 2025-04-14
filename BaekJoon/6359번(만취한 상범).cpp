#include <stdio.h>

int main() {
    int t, n, i, j, k, a[101], c = 0;

    scanf("%d", &t);
    for (i = 0; i < t; i++) {
        scanf("%d", &n);
        for (j = 1; j <= n; j++) {
            a[j] = 0;
        }
        for (j = 1; j <= n; j++) {
            for (k = j; k <= n; k += j) {
                a[k] = !a[k];
            }
        }
        int c = 0;
        for (j = 1; j <= n; j++) {
            if (a[j]) c++;
        }
        printf("%d\n", c);
    }
}
