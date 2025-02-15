#include <stdio.h>

int main() {
    int n, arr[n];;
    long long sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = arr[i] - arr[j];
            if (diff < 0) diff = -diff;
            sum += diff;
        }
    }

    printf("%lld\n", sum * 2);
}
