#include<stdio.h>
int main() {
    int have, find, exchange, result = 0, all_bottle;
    scanf("%d %d %d", &have, &find, &exchange);
    all_bottle = have + find;

    while (all_bottle >= exchange) {
        int new_bottle = all_bottle / exchange;
        result += new_bottle;
        all_bottle = all_bottle % exchange + new_bottle;
    }

    printf("%d", result);
}