#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int W, N, x, w, distance = 0, current_pos = 0;
        scanf("%d %d", &W, &N);

        int current_capacity = W;

        for (int i = 0; i < N; i++) {

            scanf("%d %d", &x, &w);

            distance += x - current_pos;
            current_pos = x;

            if (current_capacity < w) {
                distance += x * 2;
                current_capacity = W - w;
            }
            else {
                current_capacity -= w;
            }

            if (current_capacity == 0) {
                distance += x;
                current_pos = 0;
                current_capacity = W;
            }
        }

        if (current_pos != 0) {
            distance += current_pos;
        }

        printf("%d\n", distance);
    }
}
