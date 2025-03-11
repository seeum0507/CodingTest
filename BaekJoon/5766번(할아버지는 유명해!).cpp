#include <stdio.h>

int main() {
    int N, M, points[10001] = { 0 }, max_score = 0, second_score = 0;

    while (1) {
        scanf("%d %d", &N, &M);
        if (N == 0 && M == 0) break;



        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                int player;
                scanf("%d", &player);
                points[player]++;
            }
        }


        for (int i = 1; i <= 10000; i++) {
            if (points[i] > max_score) {
                max_score = points[i];
            }
        }


        for (int i = 1; i <= 10000; i++) {
            if (points[i] < max_score && points[i] > second_score) {
                second_score = points[i];
            }
        }


        for (int i = 1; i <= 10000; i++) {
            if (points[i] == second_score) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

}
