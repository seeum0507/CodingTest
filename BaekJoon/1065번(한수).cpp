#include <stdio.h>

int main() {
    int N, count = 0;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (i < 100) {
            count++;
        }
        else {
            int hundred = i / 100;
            int ten = (i / 10) % 10;
            int one = i % 10;

            if (ten - hundred == one - ten) {
                count++;
            }
        }
    }

    printf("%d", count);
}
