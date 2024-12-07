#include<stdio.h>
int main() {
    int left, ride, max = 0, sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d %d", &left, &ride);
        sum = sum - left + ride;
        if (sum > max) max = sum;
    }
    printf("%d", max);
}