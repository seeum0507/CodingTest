#include <stdio.h>

int main() {
    int N, K, i, j, num, maxNum = 0, digits[3], isValid = 1, found = 0;

    scanf("%d %d", &N, &K);
    for (i = 0; i < K; i++) {
        scanf("%d", &digits[i]);
    }

    for (num = N; num >= 0; num--) {
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;

            for (j = 0; j < K; j++) {
                if (digits[j] == digit) {
                    found = 1;
                    break;
                }
            }

            if (!found) {
                isValid = 0;
                break;
            }
            temp /= 10;
        }

        if (isValid) {
            maxNum = num;
            break;
        }
    }

    printf("%d\n", maxNum);
}
