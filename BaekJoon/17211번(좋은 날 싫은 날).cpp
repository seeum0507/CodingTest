#include <stdio.h>

int main() {
    int N, today;
    double gg, gs, sg, ss, good, bad, next_good, next_bad;

    scanf("%d %d", &N, &today);
    scanf("%lf %lf %lf %lf", &gg, &gs, &sg, &ss);

    if (today == 0) {
        good = 1.0;
        bad = 0.0;
    }
    else {
        good = 0.0;
        bad = 1.0;
    }

    for (int i = 0; i < N; i++) {
        next_good = good * gg + bad * sg;
        next_bad = good * gs + bad * ss;
        good = next_good;
        bad = next_bad;
    }

    printf("%d\n%d\n", (int)(good * 1000 + 0.5), (int)(bad * 1000 + 0.5));
}
