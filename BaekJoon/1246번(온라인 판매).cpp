#include <stdio.h>

int main() {
    int N, M, i, j, max_price = 0, max_profit = 0, p[1000], temp;

    scanf("%d %d", &N, &M);

    for (i = 0; i < M; i++) {
        scanf("%d", &p[i]);
    }

    for (i = 0; i < M - 1; i++) {
        for (j = 0; j < M - 1 - i; j++) {
            if (p[j] > p[j + 1]) {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }


    for (i = 0; i < M; i++) {
        int price = p[i];
        int buyers = M - i; 
        if (buyers > N) buyers = N; 

        int profit = price * buyers; 

        if (profit > max_profit) {
            max_profit = profit;
            max_price = price;
        }
    }

    printf("%d %d\n", max_price, max_profit);
}
