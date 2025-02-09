#include <stdio.h>

int main() {
    int meter, real_distance = 0, factor = 1;

    scanf("%d", &meter);

    while (meter > 0) {
        int digit = meter % 10;
        if (digit > 4) {
            digit--;
        }
        real_distance += digit * factor;
        factor *= 9;
        meter /= 10;
    }

    printf("%d\n", real_distance);
}
