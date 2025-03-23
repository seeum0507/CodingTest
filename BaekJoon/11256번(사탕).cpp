#include <stdio.h>

int main() {
    int T, box[1000], J, N, R, C;
    scanf("%d", &T);

    while (T--) {

        scanf("%d %d", &J, &N);

        for (int i = 0; i < N; i++) {
            scanf("%d %d", &R, &C);
            box[i] = R * C;
        }

        for (int i = 0; i < N - 1; i++) {
            for (int j = 0; j < N - 1 - i; j++) {
                if (box[j] < box[j + 1]) {
                    int temp = box[j];
                    box[j] = box[j + 1];
                    box[j + 1] = temp;
                }
            }
        }

        int count = 0;
        for (int i = 0; i < N; i++) {
            J -= box[i];
            count++;
            if (J <= 0) break;
        }

        printf("%d\n", count);
    }
}
