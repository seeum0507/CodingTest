#include <stdio.h>

int main() {
    char N[100002];
    int count[10] = { 0 }, sum = 0, zero = 0;

    scanf("%s", N);

    for (int i = 0; N[i] != '\0'; i++) {
        int num = N[i] - '0';
        count[num]++;
        sum += num;
        if (num == 0) {
            zero = 1;
        }
    }

    if (sum % 3 != 0 || zero == 0) {
        printf("-1\n");
        return 0;
    }

    for (int i = 9; i >= 0; i--) {
        while (count[i]--) {
            printf("%d", i);
        }
    }
    printf("\n");

}
