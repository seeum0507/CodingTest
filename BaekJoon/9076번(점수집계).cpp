#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        int athlete[5], max = 0, min = 11, max_idx = 0, min_idx = 0, sum = 0;

        for (int j = 0; j < 5; j++) {
            scanf("%d", &athlete[j]);
            sum += athlete[j];
            if (athlete[j] > max) {
                max = athlete[j];
                max_idx = j;
            }
            if (athlete[j] < min) {
                min = athlete[j];
                min_idx = j;
            }
        }

        sum -= (max + min);

        int sub_max = 0, sub_min = 11;
        for (int j = 0; j < 5; j++) {
            if (j != max_idx && j != min_idx) {
                if (athlete[j] > sub_max) sub_max = athlete[j];
                if (athlete[j] < sub_min) sub_min = athlete[j];
            }
        }

        if (sub_max - sub_min >= 4) {
            printf("KIN\n");
        }
        else {
            printf("%d\n", sum);
        }
    }

}
