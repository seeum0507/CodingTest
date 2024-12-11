#include<stdio.h>

int main() {
    int N, M, K, max_teams;

    scanf("%d %d %d", &N, &M, &K);

    while (K > 0) {
        if (N > M * 2) {
            N--;
        }
        else {
            M--;
        }
        K--;
    }

    max_teams = (N / 2 < M) ? (N / 2) : M;

    printf("%d", max_teams);

    return 0;
}
