#include <stdio.h>

int main() {
    int N, M;
    int cards[100][100];
    int used[100] = {0};
    int score[100] = {0};

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            scanf("%d", &cards[i][j]);

    for (int turn = 0; turn < M; turn++) {
        int max = 0;
        int played[100];

        for (int i = 0; i < N; i++) {
            int max_card = -1, idx = -1;
            for (int j = 0; j < M; j++) {
                if (cards[i][j] != -1 && cards[i][j] > max_card) {
                    max_card = cards[i][j];
                    idx = j;
                }
            }
            played[i] = max_card;
            if (idx != -1)
                cards[i][idx] = -1;
            if (max_card > max)
                max = max_card;
        }

        for (int i = 0; i < N; i++) {
            if (played[i] == max)
                score[i]++;
        }
    }

    int high = 0;
    for (int i = 0; i < N; i++) {
        if (score[i] > high)
            high = score[i];
    }

    for (int i = 0; i < N; i++) {
        if (score[i] == high)
            printf("%d ", i + 1);
    }

    return 0;
}
