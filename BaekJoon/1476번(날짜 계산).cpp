#include <stdio.h>

int main() {
    int E, S, M, e = 1, s = 1, m = 1, year = 1;

    scanf("%d %d %d", &E, &S, &M);


    while (1) {
        if (e == E && s == S && m == M) {
            printf("%d\n", year);
            break;
        }

        e++; s++; m++; year++;

        if (e > 15) e = 1;
        if (s > 28) s = 1;
        if (m > 19) m = 1;
    }
}
