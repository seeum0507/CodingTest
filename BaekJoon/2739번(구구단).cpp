#include<stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= 9; i++) {
        printf("%d * %d = %d", a, i, a * i);
        printf("\n");
    }
}