#include <stdio.h>

int main() {
    int U, N;
    scanf("%d %d", &U, &N);

    char name[100000][11];
    int price[100000], cnt[10001] = { 0 }, min_cnt = N + 1, min_price = U + 1, win_number = -1;

    for (int i = 0; i < N; i++) {
        scanf("%s %d", name[i], &price[i]);
        cnt[price[i]]++;
    }


    for (int i = 0; i < N; i++) {
        if (cnt[price[i]] < min_cnt) {
            min_cnt = cnt[price[i]];
            min_price = price[i];
            win_number = i;
        }
        else if (cnt[price[i]] == min_cnt && price[i] < min_price) {
            min_price = price[i];
            win_number = i;
        }
    }

    printf("%s %d\n", name[win_number], price[win_number]);
}
