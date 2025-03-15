#include <stdio.h>

int main() {
    int t, n, arr[100];
    long long sum = 0;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                int a = arr[i], b = arr[j];
                while (b) {
                    int temp = b;
                    b = a % b;
                    a = temp;
                }
                sum += a;
            }
        }

        printf("%lld\n", sum);
    }

}
