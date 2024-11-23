#include<stdio.h>
int main() {
    int start, end, sum = 0, min = 10000, cnt = 0;
    scanf("%d %d", &start, &end);
    for (int i = start; i <= end; i++) {
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                cnt++;
                break;
            }
        }
        if (cnt == 0 && i > 1) {
            sum += i;
            if (i < min) min = i;
        }
    }
    if (sum == 0)
        printf("-1\n");
    else
        printf("%d\n%d\n", sum, min);
}
