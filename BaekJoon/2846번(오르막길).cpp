#include <stdio.h>

int main() {
    int N, heights[1000], max_uphill = 0, current_uphill = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &heights[i]);
    }

    for (int i = 1; i < N; i++) {
        if (heights[i] > heights[i - 1]) {
            current_uphill += (heights[i] - heights[i - 1]);
        }
        else {
            if (current_uphill > max_uphill) {
                max_uphill = current_uphill;
            }
            current_uphill = 0;
        }
    }

    if (current_uphill > max_uphill) {
        max_uphill = current_uphill;
    }

    printf("%d\n", max_uphill);

}
