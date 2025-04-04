#include <stdio.h>

int main() {
    int n, i, j.a[118], isPrime[119] = { 0 };

    for (i = 2; i <= 118; i++) {
        isPrime[i] = 1;
    }
    for (i = 2; i * i <= 118; i++) {
        if (isPrime[i]) {
            for (j = i * i; j <= 118; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        int num = a[i], found = 0;
        for (j = 2; j <= num / 2; j++) {
            if (isPrime[j] && isPrime[num - j]) {
                found = 1;
                break;
            }
        }
        if (found) {
            printf("Yes\n");
        }
        else {
            printf("No\n");
        }
    }
}
