#include <stdio.h>

int main()
{
    int box_num, limit_weight, weight, box_cnt = 0, current_box_weight = 0;
    scanf("%d %d", &box_num, &limit_weight);
    for (int i = 0; i < box_num; i++) {
        scanf("%d", &weight);
        if (current_box_weight + weight > limit_weight) {
            current_box_weight = weight;
            box_cnt++;
        }
        else {
            current_box_weight += weight;
        }
    }
    if (current_box_weight) {
        box_cnt++;
    }
    printf("%d", box_cnt);
}