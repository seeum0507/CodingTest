#include <stdio.h>

int main() {
    int n, score[3] = { 0 }, count3[3] = { 0 }, count2[3] = { 0 }, c1, c2, c3, maxScore = 0, winner = 0, tie = 0, max3 = 0, max2 = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &c1, &c2, &c3);
        score[0] += c1, score[1] += c2, score[2] += c3;
        count3[0] += (c1 == 3), count3[1] += (c2 == 3), count3[2] += (c3 == 3);
        count2[0] += (c1 == 2), count2[1] += (c2 == 2), count2[2] += (c3 == 2);
    }

    for (int i = 0; i < 3; i++) {
        if (score[i] > maxScore) maxScore = score[i], winner = i + 1, tie = 1;
        else if (score[i] == maxScore) tie++;
    }

    if (tie > 1) {
        for (int i = 0; i < 3; i++)
            if (score[i] == maxScore && (count3[i] > max3 || (count3[i] == max3 && count2[i] > max2)))
                max3 = count3[i], max2 = count2[i], winner = i + 1, tie = 1;
            else if (score[i] == maxScore && count3[i] == max3 && count2[i] == max2) tie++;

        if (tie > 1) winner = 0;
    }

    printf("%d %d\n", winner, maxScore);
    return 0;
}
