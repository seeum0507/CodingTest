#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = N; i >= 4; i--) {
        int num = i;
        int gold = 1;

        while (num > 0) {
            int digit = num % 10;
            if (digit != 4 && digit != 7) {
                gold = 0;
                break;
            }
            num /= 10;
        }

        if (gold) {
            printf("%d\n", i);
            break;
        }
    }

}
