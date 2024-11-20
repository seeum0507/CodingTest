#include<stdio.h>
int main() {
    int num[7], idx = 0, sum = 0, min = 100;
    for (int i = 0; i < 7; i++) {
        scanf("%d", &num[i]);
        if (num[i] % 2 == 1) {
            num[idx] = num[i];
            idx++;
            sum += num[i];
            if (num[i] < min) min = num[i];
        }

    }
    if (idx > 0) printf("%d\n%d", sum, min);
    else printf("-1");
}