#include<stdio.h>
int main() {
    int num, store, distant[20], min, max, result;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &store);
        min = 100;
        max = 0;

        for (int j = 0; j < store; j++) {
            scanf("%d", &distant[j]);
            if (distant[j] < min) min = distant[j];
            if (distant[j] > max) max = distant[j];
        }
        result = 2 * (max - min);
        printf("%d\n", result);
    }
}
