#include<stdio.h>
int main() {
    int num, number, cnt, result = 0;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &number);
        cnt = 0;
        for (int j = 1; j <= number; j++) {
            if (number % j == 0) cnt++;
        }
        if (cnt == 2) result++;
    }

    printf("%d", result);
}
