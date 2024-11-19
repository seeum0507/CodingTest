#include<stdio.h>

int main() {
    int num, num1;
    long long sum, member;

    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        scanf("%d", &num1);
        sum = 0;

        for (int j = 0; j < num1; j++) {
            scanf("%lld", &member);
            sum = (sum + member) % num1; // 나머지 계산 추가
        }

        if (sum == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
