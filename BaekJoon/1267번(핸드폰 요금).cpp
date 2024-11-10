#include <stdio.h>

int main() {
    int num, times, YtimeMoney = 0, MtimeMoney = 0;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &times);
        YtimeMoney += ((times / 30) + 1) * 10;
        MtimeMoney += ((times / 60) + 1) * 15;
    }

    if (YtimeMoney < MtimeMoney) {
        printf("Y %d\n", YtimeMoney);
    }
    else if (MtimeMoney < YtimeMoney) {
        printf("M %d\n", MtimeMoney);
    }
    else {
        printf("Y M %d\n", YtimeMoney);
    }

    return 0;
}