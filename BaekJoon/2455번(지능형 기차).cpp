#include <stdio.h>

int main() {
    int max = 0, sum[5] = { 0 }, left, add;

    for (int i = 1; i <= 4; i++) {
        scanf("%d %d", &left, &add);
        sum[i] = sum[i - 1] - left + add;
        if (sum[i] > max) {
            max = sum[i];
        }
    }

    printf("%d", max);
}
