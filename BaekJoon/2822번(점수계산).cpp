#include <stdio.h>

int main() {
    int scores[8];
    int total = 0;
    int problems[8];
    int top_problems[5];
    int i, j, temp;


    for (i = 0; i < 8; i++) {
        scanf("%d", &scores[i]);
        problems[i] = i + 1;
    }

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 8; j++) {
            if (scores[i] < scores[j]) {

                temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;

                temp = problems[i];
                problems[i] = problems[j];
                problems[j] = temp;
            }
        }
    }

    for (i = 0; i < 5; i++) {
        total += scores[i];
        top_problems[i] = problems[i];
    }

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (top_problems[i] > top_problems[j]) {
                temp = top_problems[i];
                top_problems[i] = top_problems[j];
                top_problems[j] = temp;
            }
        }
    }


    printf("%d\n", total);
    for (i = 0; i < 5; i++) {
        printf("%d ", top_problems[i]);
    }

}
