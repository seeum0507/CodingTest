#include<stdio.h>
int main() {
    int snack_money, num, now_money, need_money;
    scanf("%d %d %d", &snack_money, &num, &now_money);
    need_money = num * snack_money;
    if (now_money - need_money < 0) {
        printf("%d", (now_money - need_money) * -1);
    }
    else printf("%d", 0);
}