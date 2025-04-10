#include <stdio.h>

int main() {
    int H, W, N,, stickers[100][2], maxArea = 0;

    scanf("%d %d", &H, &W);
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &stickers[i][0], &stickers[i][1]);
    }

    int maxArea = 0;

    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            int r1[2] = { stickers[i][0], stickers[i][1] };
            int c1[2] = { stickers[i][1], stickers[i][0] };
            int r2[2] = { stickers[j][0], stickers[j][1] };
            int c2[2] = { stickers[j][1], stickers[j][0] };

            for (int k1 = 0; k1 < 2; k1++) {
                for (int k2 = 0; k2 < 2; k2++) {
                    if ((r1[k1] + r2[k2] <= H && c1[k1] <= W && c2[k2] <= W) ||
                        (r1[k1] + r2[k2] <= W && c1[k1] <= H && c2[k2] <= H)) {
                        int area = r1[k1] * c1[k1] + r2[k2] * c2[k2];
                        if (area > maxArea) {
                            maxArea = area;
                        }
                    }
                    if ((r1[k1] + r2[k2] <= W && c1[k1] <= H && c2[k2] <= H) ||
                        (r1[k1] + r2[k2] <= H && c1[k1] <= W && c2[k2] <= W)) {
                        int area = r1[k1] * c1[k1] + r2[k2] * c2[k2];
                        if (area > maxArea) {
                            maxArea = area;
                        }
                    }
                }
            }
        }
    }

    printf("%d\n", maxArea);
}
