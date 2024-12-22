#include <stdio.h>

int main() {
    int number;

    while (1) {
        scanf("%d", &number);

        if (number == 0) {
            break;
        }


        int original = number;
        int reversed = 0;
        while (number > 0) {
            reversed = reversed * 10 + number % 10;
            number /= 10;
        }


        if (original == reversed) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    }

    return 0;
}
