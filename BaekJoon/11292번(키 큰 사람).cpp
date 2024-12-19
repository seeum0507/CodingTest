#include <stdio.h>

int main() {
    int num;
    char name[50][11];
    double height[50];

    while (1) {
        int max_index = -1;
        double max_height =


            scanf("%d", &num);
        if (num == 0) break;


        for (int i = 0; i < num; i++) {
            scanf("%s %lf", name[i], &height[i]);
            if (height[i] > max_height) {
                max_height = height[i];
                max_index = i;
            }
        }


        for (int i = 0; i < num; i++) {
            if (height[i] == max_height) {
                printf("%s ", name[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
