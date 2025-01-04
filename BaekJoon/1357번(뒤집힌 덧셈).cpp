#include <stdio.h>

int main() {
    int X, Y, revX = 0, revY = 0, sum = 0, revSum = 0, temp;

    scanf("%d %d", &X, &Y);

    temp = X;
    while (temp > 0) {
        revX = revX * 10 + temp % 10;
        temp /= 10;
    }

    temp = Y;
    while (temp > 0) {
        revY = revY * 10 + temp % 10;
        temp /= 10;
    }

    sum = revX + revY;

    temp = sum;
    while (temp > 0) {
        revSum = revSum * 10 + temp % 10;
        temp /= 10;
    }

    printf("%d\n", revSum);

}
