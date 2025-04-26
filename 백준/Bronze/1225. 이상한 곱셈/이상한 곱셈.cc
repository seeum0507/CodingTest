#include <stdio.h>

int main() {
    char a[10005], b[10005];
    int i, j;
    long long sum = 0;

    scanf("%s %s", a, b);

    for (i = 0; a[i] != '\0'; i++) {
        for (j = 0; b[j] != '\0'; j++) {
            sum += (a[i] - '0') * (b[j] - '0');
        }
    }

    printf("%lld\n", sum);

}
