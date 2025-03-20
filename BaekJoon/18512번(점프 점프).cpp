#include <stdio.h>

int main() {
    int X, Y, P1, P2;

    scanf("%d %d %d %d", &X, &Y, &P1, &P2);


    for (int i = 0; i <= 10000; i++) {
        int positionA = P1 + X * i;
        for (int j = 0; j <= 10000; j++) {
            int positionB = P2 + Y * j;

            if (positionA == positionB) {
                printf("%d\n", positionA);
                return 0;
            }
        }
    }

    printf("-1\n");
}
