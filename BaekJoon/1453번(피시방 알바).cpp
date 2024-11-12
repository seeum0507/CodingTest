#include<stdio.h>

int main() {
    int num, arr[101], count = 0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num; i++) {
        for (int j = i + 1; j < num; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }

    printf("%d\n", count);
}
