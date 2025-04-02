#include <stdio.h>

int main() {
    int N, i, A[100000];

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    if (N < 2) {
        printf("NO\n");
        return 0;
    }

    int up = 1, peak = 0;

    for (i = 1; i < N; i++) {
        if (A[i] > A[i - 1]) {
            if (!up) {
                printf("NO\n");
                return 0;
            }
        }
        else if (A[i] < A[i - 1]) {
            up = 0;
            peak = 1;
        }
        else {
            printf("NO\n");
            return 0;
        }
    }

    if (peak || up) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
