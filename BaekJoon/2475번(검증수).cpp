#include<stdio.h>
#include<math.h>

int main() {
    int one, two, three, four, five;
    int result;
    scanf("%d %d %d %d %d", &one, &two, &three, &four, &five);
    result = ((int)(pow(one, 2) + pow(two, 2) + pow(three, 2) + pow(four, 2) + pow(five, 2))) % 10;
    printf("%d", result);
}
