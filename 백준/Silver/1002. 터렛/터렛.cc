#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        int dx = x2 - x1, dy = y2 - y1, d_sq = dx * dx + dy * dy, r_sum = r1 + r2, r_diff = r1 - r2;
        if (r_diff < 0) r_diff = -r_diff;

        int r_sum_sq = r_sum * r_sum, r_diff_sq = r_diff * r_diff;

        if (d_sq == 0 && r1 == r2) {
            printf("-1\n");
        } else if (d_sq == r_sum_sq || d_sq == r_diff_sq) {
            printf("1\n");
        } else if (r_diff_sq < d_sq && d_sq < r_sum_sq) {
            printf("2\n");
        } else {
            printf("0\n");
        }
    }

}
