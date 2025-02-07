#include <stdio.h>

int main() {
    int T, num1, num2, x1, y1, x2, y2;
    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &num1, &num2);


        for (x1 = 1; x1 <= 150; x1++) {
            for (y1 = 1; y1 <= 150; y1++) {
                int diagonal1 = x1 + y1 - 1;
                int first_in_diagonal1 = (diagonal1 - 1) * diagonal1 / 2 + 1;
                if (first_in_diagonal1 + (x1 - 1) == num1) {
                    break;
                }
            }
            if (y1 <= 150) break;
        }

        for (x2 = 1; x2 <= 150; x2++) {
            for (y2 = 1; y2 <= 150; y2++) {
                int diagonal2 = x2 + y2 - 1;
                int first_in_diagonal2 = (diagonal2 - 1) * diagonal2 / 2 + 1;
                if (first_in_diagonal2 + (x2 - 1) == num2) {
                    break;
                }
            }
            if (y2 <= 150) break;
        }

        int x_sum = x1 + x2;
        int y_sum = y1 + y2;

        int diagonal_sum = x_sum + y_sum - 1;
        int first_in_diagonal_sum = (diagonal_sum - 1) * diagonal_sum / 2 + 1;
        int result = first_in_diagonal_sum + (x_sum - 1);

        printf("%d\n", result);
    }

}
