#include<stdio.h>
int main() {
    int nums[9], max = 0, idx = 0;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &nums[i]);
        if (nums[i] > max) {
            max = nums[i];
            idx = i;
        }
    }
    printf("%d %d", max, idx + 1);
}