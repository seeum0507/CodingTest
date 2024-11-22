#include<stdio.h>
int main() {
    int num, max = 0, nums;
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &nums);
        if (nums > max) max = nums;
    }
    printf("%d", max);
}