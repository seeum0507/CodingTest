#include <stdio.h>

int main() {
    int N, max, min, score;

    scanf("%d", &N);
    scanf("%d", &score);

    max = min = score;

    for (int i = 1; i < N; i++) {
        scanf("%d", &score);
        if (score > max) max = score;
        if (score < min) min = score;
    }

    printf("%d\n", max - min);
}
