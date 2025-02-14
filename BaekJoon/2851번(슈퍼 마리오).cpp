#include <stdio.h>

int main() {
    int scores[10], sum = 0, prev_sum = 0, i;

    for (i = 0; i < 10; i++) {
        scanf("%d", &scores[i]);
    }

    for (i = 0; i < 10; i++) {
        prev_sum = sum;
        sum += scores[i];

        if (sum >= 100) {
            if (sum - 100 <= 100 - prev_sum) {
                printf("%d\n", sum);
            }
            else {
                printf("%d\n", prev_sum);
            }
            return 0;
        }
    }

    printf("%d\n", sum);
}
