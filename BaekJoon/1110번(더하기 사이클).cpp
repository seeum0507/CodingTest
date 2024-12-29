#include<stdio.h>

int main() {
    int num, temp, count = 0;
    scanf("%d", &num);

    temp = num;
    while (1) {
        int first = temp / 10;
        int second = temp % 10;
        int sum = first + second;
        temp = (second * 10) + (sum % 10);
        count++;

        if (temp == num) {
            break;
        }
    }

    printf("%d\n", count);
}
