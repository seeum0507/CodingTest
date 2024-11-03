#include<stdio.h>
int main() {
    int num, limit, a;

    scanf("%d %d", &num, &limit);
    for (int i = 0; i < num; i++) {
        scanf("%d", &a);
        if (a < limit) {
            printf("%d ", a);
        }
    }
}