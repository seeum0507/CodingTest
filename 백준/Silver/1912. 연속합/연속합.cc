#include <stdio.h>

int main() {
    int n, i, num, sum = 0, max = -1001;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);

        if (sum + num > num) {
            sum = sum + num;
        } else {
            sum = num;
        }

        if (sum > max) {
            max = sum;
        }
    }

    printf("%d\n", max);
    return 0;
}
