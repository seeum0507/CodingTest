#include <stdio.h>

int main() {
    int n, pos = 0;
    char str[600000], target[10];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int temp = i, start = pos, len = 0;
        char rev[10];

        while (temp) {
            rev[len++] = temp % 10 + '0';
            temp /= 10;
        }

        for (int j = len - 1; j >= 0; j--) {
            str[pos++] = rev[j];
        }
    }

    int temp = n, len = 0;

    while (temp) {
        target[len++] = temp % 10 + '0';
        temp /= 10;
    }

    for (int i = 0; i < len / 2; i++) {
        char t = target[i];
        target[i] = target[len - 1 - i];
        target[len - 1 - i] = t;
    }

    for (int i = 0; i <= pos - len; i++) {
        int match = 1;
        for (int j = 0; j < len; j++) {
            if (str[i + j] != target[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            printf("%d\n", i + 1);
            return 0;
        }
    }
}
