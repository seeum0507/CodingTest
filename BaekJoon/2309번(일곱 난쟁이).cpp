#include <stdio.h>

int main() {
    int heights[9], sum = 0, i, j;

    for (i = 0; i < 9; i++) {
        scanf("%d", &heights[i]);
        sum += heights[i];
    }

    int fake1 = -1, fake2 = -1;
    for (i = 0; i < 9; i++) {
        for (j = i + 1; j < 9; j++) {
            if (sum - heights[i] - heights[j] == 100) {
                fake1 = i;
                fake2 = j;
                break;
            }
        }
    }

    int result[7], idx = 0;
    for (i = 0; i < 9; i++) {
        if (i != fake1 && i != fake2) {
            result[idx] = heights[i];
            idx++;
        }
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6 - i; j++) {
            if (result[j] > result[j + 1]) {
                int temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < 7; i++) {
        printf("%d\n", result[i]);
    }

}
