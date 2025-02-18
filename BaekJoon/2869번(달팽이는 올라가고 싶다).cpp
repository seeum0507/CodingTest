#include <stdio.h>

int main() {
    int A, B, V, days;

    scanf("%d %d %d", &A, &B, &V);

    days = (V - B - 1) / (A - B) + 1;

    printf("%d\n", days);
}
