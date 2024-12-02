#include<stdio.h>

int main() {
    int Minguk[4], Manse[4];
    int S = 0, T = 0;

    for (int i = 0; i < 4; i++) {
        scanf("%d", &Minguk[i]);
        S += Minguk[i];
    }
    for (int j = 0; j < 4; j++) {
        scanf("%d", &Manse[j]);
        T += Manse[j];
    }

    if (S >= T)
        printf("%d", S);
    else
        printf("%d", T);
}
