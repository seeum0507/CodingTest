#include <stdio.h>

int main() {
    int L, P, V;
    int caseNumber = 1;

    while (1) {
        scanf("%d %d %d", &L, &P, &V);
        if (L == 0 && P == 0 && V == 0) break;

        int fullPeriods = V / P;
        int remainingDays = V % P;
        int maxUseDays = fullPeriods * L + (remainingDays < L ? remainingDays : L);

        printf("Case %d: %d\n", caseNumber, maxUseDays);
        caseNumber++;
    }
}
