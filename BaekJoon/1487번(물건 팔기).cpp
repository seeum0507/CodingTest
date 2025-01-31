#include <stdio.h>

int main() {
    int n, i, j, max_profit = 0, best_price = 0, price[50], shipping[50], temp;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d %d", &price[i], &shipping[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (price[j] > price[j + 1]) {
                temp = price[j];
                price[j] = price[j + 1];
                price[j + 1] = temp;

                temp = shipping[j];
                shipping[j] = shipping[j + 1];
                shipping[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        int sell_price = price[i], total_profit = 0;

        for (j = 0; j < n; j++) {
            if (price[j] >= sell_price && sell_price > shipping[j]) {
                total_profit += (sell_price - shipping[j]);
            }
        }

        if (total_profit > max_profit) {
            max_profit = total_profit;
            best_price = sell_price;
        }
    }

    printf("%d\n", max_profit > 0 ? best_price : 0);
}
