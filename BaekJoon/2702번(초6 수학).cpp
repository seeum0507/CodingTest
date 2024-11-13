#include <stdio.h>

int main() {
    int num, a, b, min, max;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d %d", &a, &b);

        for (int j = (a < b ? a : b); j >= 1; --j) {
            if (a % j == 0 && b % j == 0) {
                max = j;
                break;
            }
        }


        min = (a * b) / max;

        printf("%d %d\n", min, max);
    }

    return 0;
}
