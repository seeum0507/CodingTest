#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int numbers[1000];

    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        printf("%d\n", numbers[i]);
    }


}