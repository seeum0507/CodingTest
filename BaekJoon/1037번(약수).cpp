#include<stdio.h>
int main() {
    long long num, measure, min = 1000000, max = 0, answer;
    scanf("%lld", &num);
    for (int i = 0; i < num; i++) {
        scanf("%lld", &measure);
        if (measure < min) {
            min = measure;
        }
        if (measure > max) {
            max = measure;
        }
    }
    answer = min * max;
    printf("%lld", answer);
}