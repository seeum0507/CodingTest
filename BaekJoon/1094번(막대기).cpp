#include <stdio.h>

int main() {
    int X, count = 0, stick = 64;
    scanf("%d", &X);


    while (X > 0) {
        if (stick > X) {
            stick /= 2;
        }
        else {
            X -= stick;
            count++;
        }
    }

    printf("%d\n", count);
}
