#include <stdio.h>

int main() {
    int N, T, P, scores[T], participants[N], solved[N], board[N][T];
    scanf("%d %d %d", &N, &T, &P);


    for (int i = 0; i < T; i++) scores[i] = 0;

    for (int i = 0; i < N; i++) {
        solved[i] = 0;
        for (int j = 0; j < T; j++) {
            scanf("%d", &board[i][j]);
            if (board[i][j] == 0) scores[j]++;
            else solved[i]++;
        }
    }

    for (int i = 0; i < N; i++) {
        participants[i] = 0;
        for (int j = 0; j < T; j++) {
            if (board[i][j] == 1) participants[i] += scores[j];
        }
    }

    int philipScore = participants[P - 1];
    int philipSolved = solved[P - 1];
    int rank = 1;

    for (int i = 0; i < N; i++) {
        if (i == P - 1) continue;
        if (participants[i] > philipScore) rank++;
        else if (participants[i] == philipScore) {
            if (solved[i] > philipSolved) rank++;
            else if (solved[i] == philipSolved && i < P - 1) rank++;
        }
    }

    printf("%d %d\n", philipScore, rank);
}
