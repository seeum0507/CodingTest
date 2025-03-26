#include <stdio.h>

int main() {
    int S, M, ari_money = 1023;

    scanf("%d %d", &S, &M);

    if (ari_money >= S) {
        printf("No thanks\n");
    }
    else {
        int need = S - ari_money;

        if ((M & need) == need) {
            printf("Thanks\n");
        }
        else {
            printf("Impossible\n");
        }
    }
}
