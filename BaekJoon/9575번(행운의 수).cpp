#include <stdio.h>

int main() {
    int t, alreadyExists = 0, N, M, K, luckyCount = 0, luckyNumbers[10000] = { 0 }, isLucky = 1;
    scanf("%d", &t);

    while (t--) {

        scanf("%d", &N);
        int A[N];
        for (int i = 0; i < N; i++) scanf("%d", &A[i]);

        scanf("%d", &M);
        int B[M];
        for (int i = 0; i < M; i++) scanf("%d", &B[i]);

        scanf("%d", &K);
        int C[K];
        for (int i = 0; i < K; i++) scanf("%d", &C[i]);


        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                for (int k = 0; k < K; k++) {
                    int sum = A[i] + B[j] + C[k];
                    int sumTemp = sum;

                    while (sumTemp > 0) {
                        int digit = sumTemp % 10;
                        if (digit != 5 && digit != 8) {
                            isLucky = 0;
                            break;
                        }
                        sumTemp /= 10;
                    }

                    if (isLucky) {
                        for (int l = 0; l < luckyCount; l++) {
                            if (luckyNumbers[l] == sum) {
                                alreadyExists = 1;
                                break;
                            }
                        }

                        if (!alreadyExists) {
                            luckyNumbers[luckyCount++] = sum;
                        }
                    }
                }
            }
        }

        printf("%d\n", luckyCount);
    }
}
