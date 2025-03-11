#include <stdio.h>

int main() {
    int N, T, min_wait = 1000000000, found = 0, S, I, C;

    scanf("%d %d", &N, &T);

    for (int i = 0; i < N; i++) {
        scanf("%d %d %d", &S, &I, &C);

        for (int j = 0; j < C; j++) {
            int bus_time = S + j * I;
            if (bus_time >= T) {
                int wait_time = bus_time - T;
                if (wait_time < min_wait) {
                    min_wait = wait_time;
                }
                found = 1;
                break;
            }
        }
    }

    if (found) {
        printf("%d\n", min_wait);
    }
    else {
        printf("-1\n");
    }

}
