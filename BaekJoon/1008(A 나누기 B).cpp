#include <stdio.h>
int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%.9f", (double)a / b);
    return 0;
}