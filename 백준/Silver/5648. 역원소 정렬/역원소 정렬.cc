#include <stdio.h>

int main() {
    int n, count = 0;
    unsigned long long arr[1000000], x;
    
    scanf("%d", &n);

    while (count < n && scanf("%llu", &x) == 1) {
        unsigned long long rev = 0;
        while (x > 0) {
            rev = rev * 10 + (x % 10);
            x /= 10;
        }
        arr[count++] = rev;
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (arr[i] > arr[j]) {
                unsigned long long temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%llu\n", arr[i]);
    }

}
