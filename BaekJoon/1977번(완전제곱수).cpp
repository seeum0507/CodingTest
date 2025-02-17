#include <stdio.h>

int main() {
    int M, N, sum = 0, min = -1;

    scanf("%d", &M);
    scanf("%d", &N);

    for (int i = 1; i * i <= N; i++) {
        int square = i * i;
        if (square >= M && square <= N) {
            sum += square;
            if (min == -1 || square < min) {
                min = square;
            }
        }
    }

    if (sum == 0) {
        printf("-1\n");
    }
    else {
        printf("%d\n%d\n", sum, min);
    }
}
