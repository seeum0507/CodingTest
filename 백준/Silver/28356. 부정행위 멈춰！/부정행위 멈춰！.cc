#include <stdio.h>

int main() {
    int N, M, color_count;
    scanf("%d %d", &N, &M);


    if (N == 1 && M == 1) color_count = 1;
    else if (N == 1 || M == 1) color_count = 2;
    else color_count = 4;

    printf("%d\n", color_count);

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (color_count == 1)
                printf("1 ");
            else if (color_count == 2)
                printf("%d ", (i + j) % 2 + 1);
            else 
                printf("%d ", (i % 2) * 2 + (j % 2) + 1);
        }
        printf("\n");
    }

}
