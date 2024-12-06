#include <stdio.h>

int main() {
    int N, times = 0, K = 1;

    scanf("%d", &N);

    int left = N;

    while (left > 0) {
        if (left < K) {
            K = 1;
        }
        left -= K;
        K++;
        times++;
    }

    printf("%d\n", times);
}
