#include<stdio.h>
int main() {
    int feeling[200001];
    long long result = 0;
    int num;
    feeling[0] = 0;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        scanf("%d", &feeling[i]);
        if (feeling[i] == 0)
            feeling[i] = feeling[i - 1] - 1;
        else
            feeling[i] = feeling[i - 1] + 1;
        result += feeling[i];
    }
    printf("%lld", result);
}