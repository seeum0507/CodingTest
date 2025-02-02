#include <stdio.h>

int main() {
    int N, M, package_min = 1001, single_min = 1001, i, package, single, cost;

    scanf("%d %d", &N, &M);

    for (i = 0; i < M; i++) {
        scanf("%d %d", &package, &single);
        if (package < package_min) package_min = package;
        if (single < single_min) single_min = single;
    }

    cost = (N / 6) * package_min + (N % 6) * single_min;
    if ((N / 6 + 1) * package_min < cost) cost = (N / 6 + 1) * package_min;
    if (N * single_min < cost) cost = N * single_min;

    printf("%d\n", cost);
    return 0;
}
