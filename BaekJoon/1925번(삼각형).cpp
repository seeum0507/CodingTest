#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);

    if ((y2 - y1) * (x3 - x1) == (y3 - y1) * (x2 - x1)) {
        printf("X\n");
        return 0;
    }

    int a2 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    int b2 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
    int c2 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);

    if (a2 > b2 && a2 > c2) {
        int temp = c2;
        c2 = a2;
        a2 = temp;
    }
    if (b2 > a2 && b2 > c2) {
        int temp = c2;
        c2 = b2;
        b2 = temp;
    }

    if (a2 == b2 && b2 == c2) {
        printf("JungTriangle\n");
        return 0;
    }

    if (a2 == b2 || b2 == c2 || a2 == c2) {
        if (c2 > a2 + b2) {
            printf("Dunkak2Triangle\n");
        }
        else if (c2 == a2 + b2) {
            printf("Jikkak2Triangle\n");
        }
        else {
            printf("Yeahkak2Triangle\n");
        }
    }
    else {
        if (c2 > a2 + b2) {
            printf("DunkakTriangle\n");
        }
        else if (c2 == a2 + b2) {
            printf("JikkakTriangle\n");
        }
        else {
            printf("YeahkakTriangle\n");
        }
    }

    return 0;
}
