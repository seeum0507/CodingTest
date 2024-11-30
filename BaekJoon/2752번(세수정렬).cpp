#include<stdio.h>

int main() {
    int number[3], temp;
    for (int i = 0; i < 3; i++) {
        scanf("%d", &number[i]);
    }
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (number[i] > number[j]) {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
    }
    printf("%d %d %d", number[0], number[1], number[2]);
}