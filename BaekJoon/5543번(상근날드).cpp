#include<stdio.h>
int main() {
    int hamburger[3], drinks[2], h_min = 2000, j_min = 2000;

    for (int i = 0; i < 3; i++) {
        scanf("%d", &hamburger[i]);
        if (hamburger[i] < h_min) h_min = hamburger[i];
    }
    for (int i = 0; i < 2; i++) {
        scanf("%d", &drinks[i]);
        if (drinks[i] < j_min) j_min = drinks[i];
    }
    printf("%d", j_min + h_min - 50);
}