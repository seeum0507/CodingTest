#include <stdio.h>

int main() {
    int a, b, c, d, e;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    int num = 1;
    while (1) {
        int count = 0;
        if (num % a == 0) count++;
        if (num % b == 0) count++;
        if (num % c == 0) count++;
        if (num % d == 0) count++;
        if (num % e == 0) count++;

        if (count >= 3) {
            printf("%d\n", num);
            break;
        }
        num++;
    }
}
