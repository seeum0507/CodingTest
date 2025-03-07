#include <stdio.h>

int main() {
    int n, teamA[300], teamB[300], maxStreak = 0, currentStreak = 0, winner = -1, newWinner;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &teamA[i]);
    for (int i = 0; i < n; i++) scanf("%d", &teamB[i]);

    for (int i = 0; i < n; i++) {
        int a = teamA[i], b = teamB[i];

        if ((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2)) {
            newWinner = 1;
        }
        else if ((b == 1 && a == 3) || (b == 2 && a == 1) || (b == 3 && a == 2)) {
            newWinner = 2;
        }
        else {
            newWinner = (winner == 1) ? 2 : 1;
        }

        if (newWinner == winner) {
            currentStreak++;
        }
        else {
            currentStreak = 1;
            winner = newWinner;
        }

        if (currentStreak > maxStreak) {
            maxStreak = currentStreak;
        }
    }

    printf("%d\n", maxStreak);
}
