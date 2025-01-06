#include <stdio.h>

int main() {
    int N, buno = 0, number = 666;
    scanf("%d", &N);

    while (1) {
        int yet_number = number;
        int continue_cnt = 0;

        while (yet_number > 0) {
            if (yet_number % 10 == 6) {
                continue_cnt++;
            }
            else {
                continue_cnt = 0;
            }

            if (continue_cnt == 3) {
                buno++;
                break;
            }

            yet_number /= 10;
        }

        if (buno == N) {
            printf("%d\n", number);
            break;
        }

        number++;
    }

}
