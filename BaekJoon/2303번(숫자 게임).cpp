#include<stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int nums[N][5];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &nums[i][j]);
        }
    }

    int max_remainder = -1, winner = -1;
    for (int i = 0; i < N; i++) {
        for (int a = 0; a < 3; a++) {
            for (int b = a + 1; b < 4; b++) {
                for (int c = b + 1; c < 5; c++) {
                    int sum = nums[i][a] + nums[i][b] + nums[i][c];
                    int remainders = sum % 10;
                    if (remainders > max_remainder || (remainders == max_remainder && i + 1 > winner)) {
                        max_remainder = remainders;
                        winner = i + 1;
                    }
                }
            }
        }
    }

    printf("%d\n", winner);
    return 0;
}
