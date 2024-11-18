#include <stdio.h>

int main() {
    int num, store[1001], count = 0, current = 0;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &store[i]);
    }

    for (int i = 0; i < num; i++) {
        if (store[i] == current) {
            count++;
            current = (current + 1) % 3;
        }
    }


    printf("%d\n", count);

}
