#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if (C <= B) {
        printf("-1\n");
    }
    else {
        int break_even_point = A / (C - B) + 1;
        printf("%d\n", break_even_point);
    }

}