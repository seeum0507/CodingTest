#include <stdio.h>

int main() {
    int N, result = 0;
    scanf("%d", &N);


    for (int i = 1; i < N; i++) {
        int sum = i;
        int temp = i;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum == N) {
            result = i;
            break;
        }
    }

    printf("%d\n", result);

    return 0;
}
