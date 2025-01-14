#include <stdio.h>

int main() {
    int guess, low, high;
    char response[10];

    while (1) {
        low = 1;
        high = 10;
        int dishonest = 0;

        while (1) {
            scanf("%d", &guess);
            if (guess == 0) return 0;

            scanf(" %[^\n]", response);

            if (response[0] == 't') {
                if (response[4] == 'h') {
                    if (guess <= low) dishonest = 1;
                    if (guess - 1 < high) high = guess - 1;
                }
                else {
                    if (guess >= high) dishonest = 1;
                    if (guess + 1 > low) low = guess + 1;
                }
            }
            else if (response[0] == 'r') {
                if (guess < low || guess > high) dishonest = 1;
                printf("%s\n", dishonest ? "Stan is dishonest" : "Stan may be honest");
                break;
            }
        }
    }
}
