#include <stdio.h>

int main() {
    long long x, y, left = 1, right = 1000000000, answer = -1;
    scanf("%lld %lld", &x, &y);

    long long z = (y * 100) / x;
    if (z >= 99) {
        printf("-1\n");
        return 0;
    }


    while (left <= right) {
        long long mid = (left + right) / 2;
        long long new_z = ((y + mid) * 100) / (x + mid);

        if (new_z > z) {
            answer = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    printf("%lld\n", answer);
}
