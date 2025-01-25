#include <stdio.h>

int main() {
    int N, B, H, W, p, a;
    scanf("%d %d %d %d", &N, &B, &H, &W);

    int min_cost = B + 1;

    for (int i = 0; i < H; i++) {

        scanf("%d", &p);

        for (int j = 0; j < W; j++) {

            scanf("%d", &a);

            if (a >= N) {
                int total_cost = N * p;
                if (total_cost <= B && total_cost < min_cost) {
                    min_cost = total_cost;
                }
            }
        }
    }

    if (min_cost > B) {
        printf("stay home\n");
    }
    else {
        printf("%d\n", min_cost);
    }
}
