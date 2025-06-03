#include <stdio.h>

int main() {
    int n, m, a[10000];
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int s = 0, e = 0, sum = a[0], cnt = 0;

    while (s < n) {
        if (sum == m) {
            cnt++;
            sum -= a[s];
            s++;
        } else if (sum < m) {
            e++;
            if (e == n) break;
            sum += a[e];
        } else {
            sum -= a[s];
            s++;
        }
    }

    printf("%d\n", cnt);
}
