#include <stdio.h>

int main() {
    int area[101][101] = { 0 }, x1, y1, x2, y2, total = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        for (int x = x1; x < x2; x++) {
            for (int y = y1; y < y2; y++) {
                area[x][y] = 1;
            }
        }
    }

    for (int x = 1; x <= 100; x++) {
        for (int y = 1; y <= 100; y++) {
            if (area[x][y] == 1) {
                total++;
            }
        }
    }

    printf("%d\n", total);

}
