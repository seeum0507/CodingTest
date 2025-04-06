#include <stdio.h>

int main() {
    int n, snow[100], i, max = 0, total = 0, min_time;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &snow[i]);
        total += snow[i];
        if (snow[i] > max) {
            max = snow[i];
        }
    }


    if (max > total - max) {
        min_time = max;
    }
    else {
        if (total % 2 == 0) {
            min_time = total / 2;
        }
        else {
            min_time = total / 2 + 1;
        }
    }

    if (min_time > 1440) {
        printf("-1\n");
    }
    else {
        printf("%d\n", min_time);
    }
}
