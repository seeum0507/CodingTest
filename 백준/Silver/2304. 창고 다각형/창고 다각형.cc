#include <stdio.h>

int main() {
    int n, l[1001] = {0}, i, x, h, max_h = 0, max_l = 0, area = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %d", &x, &h);
        l[x] = h;
        if (h > max_h) {
            max_h = h;
            max_l = x;
        }
    }

    int temp = 0;
    for (i = 0; i <= max_l; i++) {
        if (l[i] > temp) temp = l[i];
        area += temp;
    }

    temp = 0;
    for (i = 1000; i > max_l; i--) {
        if (l[i] > temp) temp = l[i];
        area += temp;
    }

    printf("%d\n", area);
}
