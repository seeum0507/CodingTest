#include <stdio.h>

int main() {
    int n, a[128][128], w = 0, b = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int sx[10000], sy[10000], sz[10000], sp = 0;
    
    sx[sp] = 0;
    sy[sp] = 0;
    sz[sp] = n;
    sp++;

    while (sp > 0) {
        sp--;
        int x = sx[sp], y = sy[sp], s = sz[sp], c = a[x][y], ok = 1;

        for (int i = x; i < x + s; i++) {
            for (int j = y; j < y + s; j++) {
                if (a[i][j] != c) {
                    ok = 0;
                    break;
                }
            }
            if (!ok) break;
        }

        if (ok) {
            if (c == 0) w++;
            else b++;
        } else {
            int h = s / 2;
            sx[sp] = x;       sy[sp] = y;       sz[sp] = h; sp++;
            sx[sp] = x;       sy[sp] = y + h;   sz[sp] = h; sp++;
            sx[sp] = x + h;   sy[sp] = y;       sz[sp] = h; sp++;
            sx[sp] = x + h;   sy[sp] = y + h;   sz[sp] = h; sp++;
        }
    }

    printf("%d\n%d\n", w, b);
}
