#include <stdio.h>

int main() {
    int k, dir[6], len[6], i;

    scanf("%d", &k);
    for(i = 0; i < 6; i++) {
        scanf("%d %d", &dir[i], &len[i]);
    }

    int max_width = 0, max_height = 0, max_width_idx = 0, max_height_idx = 0;

    for(i = 0; i < 6; i++) {
        if((dir[i] == 1 || dir[i] == 2) && len[i] > max_width) {
            max_width = len[i];
            max_width_idx = i;
        }
        if((dir[i] == 3 || dir[i] == 4) && len[i] > max_height) {
            max_height = len[i];
            max_height_idx = i;
        }
    }

    int small_width = len[(max_height_idx + 5) % 6] - len[(max_height_idx + 1) % 6];
    if(small_width < 0) small_width = -small_width;

    int small_height = len[(max_width_idx + 5) % 6] - len[(max_width_idx + 1) % 6];
    if(small_height < 0) small_height = -small_height;

    int total_area = (max_width * max_height) - (small_width * small_height);
    printf("%d\n", total_area * k);

}
