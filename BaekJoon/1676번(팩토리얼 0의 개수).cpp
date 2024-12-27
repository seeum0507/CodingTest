#include<stdio.h>

int main() {
    int num, cnt = 0;
    scanf("%d", &num);

    for (int i = 5; i <= num; i *= 5) {
        cnt += num / i;
    }

    printf("%d", cnt);
}
