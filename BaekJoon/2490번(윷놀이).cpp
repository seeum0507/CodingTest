#include<stdio.h>
int main() {
    int yut[4], zero, one;
    for (int i = 0; i < 3; i++) {
        zero = 0;
        one = 0;
        for (int j = 0; j < 4; j++) {
            scanf("%d", &yut[j]);
            if (yut[j] == 0) zero++;
            else one++;
        }

        if (zero == 1) printf("A\n");
        else if (zero == 2) printf("B\n");
        else if (zero == 3) printf("C\n");
        else if (zero == 4) printf("D\n");
        else printf("E\n");
    }
}
