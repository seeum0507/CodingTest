#include <stdio.h>

int main() {
    int n, i;
    long long arr[50], diff, ratio;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }

    diff = arr[1] - arr[0];
    ratio = arr[1] / arr[0];

    if (arr[2] - arr[1] == diff) {
        printf("%lld\n", arr[n - 1] + diff);
    }
    else {
        printf("%lld\n", arr[n - 1] * ratio);
    }
}
