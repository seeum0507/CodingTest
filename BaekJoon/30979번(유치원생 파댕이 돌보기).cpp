#include<stdio.h>
int main() {
    int times, num, candy, sum = 0;
    scanf("%d", &times);
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &candy);
        sum += candy;
    }
    if (sum >= times) printf("Padaeng_i Happy");
    else printf("Padaeng_i Cry");

}