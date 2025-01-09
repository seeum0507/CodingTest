#include <stdio.h>

int main() {
    int T, A[10], temp;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        for (int j = 0; j < 10; j++) {
            scanf("%d", &A[j]);
        }

        for (int x = 0; x < 10; x++) {
            for (int y = x + 1; y < 10; y++) {
                if (A[x] < A[y]) {
                    temp = A[x];
                    A[x] = A[y];
                    A[y] = temp;
                }
            }
        }

        printf("%d\n", A[2]);
    }

}
