#include <stdio.h>

int main() {
    int n, i, budget[10000], totalBudget, low = 0, high = 0, mid, sum, answer = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &budget[i]);
        if (budget[i] > high) {
            high = budget[i];
        }
    }
    scanf("%d", &totalBudget);

    while (low <= high) {
        mid = (low + high) / 2;
        sum = 0;

        for (i = 0; i < n; i++) {
            if (budget[i] > mid) {
                sum += mid;
            } else {
                sum += budget[i];
            }
        }

        if (sum <= totalBudget) {
            answer = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("%d\n", answer);
}
