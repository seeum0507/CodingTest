#include<stdio.h>

int main() {
    int num, max = -1;
    float sum = 0;
    scanf("%d", &num);
    int score[num];

    for (int i = 0; i < num; i++) {
        scanf("%d", &score[i]);
        if (score[i] > max) {
            max = score[i];
        }
    }

    for (int i = 0; i < num; i++) {
        sum += (float)score[i] / max * 100;
    }

    printf("%.10f", sum / num);
}
