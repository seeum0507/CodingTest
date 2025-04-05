#include <stdio.h>

int main() {
    int h, w, min;
    scanf("%d", &h);
    scanf("%d", &w);

    if (h < w) {
        min = h;
    }
    else {
        min = w;
    }

    int radius_cm = (min * 100) / 2;
    printf("%d\n", radius_cm);
}
