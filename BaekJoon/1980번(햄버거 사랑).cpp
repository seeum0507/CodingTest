#include <stdio.h>

int main() {
    int n, m, t;
    scanf("%d %d %d", &n, &m, &t);

    if (n > m) {
        int temp = n;
        n = m;
        m = temp;
    }

    int max_burgers = 0, min_cola_time = t;

    for (int i = 0; i * m <= t; i++) {
        int remaining = t - (i * m);
        int burgers = i + (remaining / n);
        int cola_time = remaining % n;

        if (cola_time < min_cola_time || (cola_time == min_cola_time && burgers > max_burgers)) {
            max_burgers = burgers;
            min_cola_time = cola_time;
        }
    }

    printf("%d %d\n", max_burgers, min_cola_time);
}
