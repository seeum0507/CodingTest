#include <stdio.h>

int main() {
    int N, count = 0, sum = 0;
    scanf("%d", &N);

    for (int start = 1; start <= N; start++) {
        for (int num = start; num <= N; num++) {
            sum += num;
            if (sum == N) {
                count++;
                break;
            }
            else if (sum > N) {
                break;
            }
        }
    }

    printf("%d\n", count);
}
