#include <stdio.h>

int main() {
    int w, h, x, y, p;
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &p);

    int count = 0;

    for (int i = 0; i < p; i++) {
        int px, py;
        scanf("%d %d", &px, &py);

        if (px >= x && px <= x + w && py >= y && py <= y + h) {
            count++;
            continue;
        }

        int cx1 = x, cy = y + h / 2, dx1 = px - cx1, dy1 = py - cy;
        if (dx1 * dx1 + dy1 * dy1 <= (h / 2) * (h / 2)) {
            count++;
            continue;
        }

        int cx2 = x + w, dx2 = px - cx2, dy2 = py - cy;
        if (dx2 * dx2 + dy2 * dy2 <= (h / 2) * (h / 2)) {
            count++;
            continue;
        }
    }

    printf("%d\n", count);
}
