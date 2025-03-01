#include <stdio.h>

int main() {
    int n, sum = 0, divisors[10000], count = 0;

    while (1) {
        scanf("%d", &n);
        if (n == -1) break;


        for (int i = 1; i < n; i++) {
            if (n % i == 0) {
                divisors[count++] = i;
                sum += i;
            }
        }

        if (sum == n) {
            printf("%d = %d", n, divisors[0]);
            for (int i = 1; i < count; i++) {
                printf(" + %d", divisors[i]);
            }
            printf("\n");
        }
        else {
            printf("%d is NOT perfect.\n", n);
        }
    }

}
