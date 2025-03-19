#include <stdio.h>

int main() {
    int N, R, C;
    char field[99][99];

    scanf("%d %d %d", &N, &R, &C);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            field[i][j] = '.';
        }
    }

    R--; C--;
    field[R][C] = 'v';

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (((i + j) % 2) == ((R + C) % 2)) {
                field[i][j] = 'v';
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c", field[i][j]);
        }
        printf("\n");
    }
}
