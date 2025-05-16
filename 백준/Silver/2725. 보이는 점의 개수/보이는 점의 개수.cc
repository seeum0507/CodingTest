#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);

    int t, i, j;
    int phi[1001];

    for (t = 0; t < c; t++) {
        int n;
        scanf("%d", &n);

        for (i = 0; i <= n; i++) phi[i] = i;

        for (i = 2; i <= n; i++) {
            if (phi[i] == i) {
                for (j = i; j <= n; j += i) {
                    phi[j] = phi[j] / i * (i - 1);
                }
            }
        }

        int sum = 0;
        for (i = 1; i <= n; i++) {
            sum += phi[i];
        }

        printf("%d\n", sum * 2 + 1);
    }

    return 0;
}
