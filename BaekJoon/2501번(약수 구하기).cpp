#include <stdio.h>
int main() {
    int number, order, measure[10000], idx = 0;
    scanf("%d %d", &number, &order);
    for (int i = 1; i <= number; i++) {
        if (number % i == 0) {
            measure[idx] = i;
            idx++;
        }
    }
    if (order > idx) {
        printf("0");
    }
    else {
        printf("%d", measure[order - 1]);
    }
    return 0;
}
