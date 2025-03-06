#include <stdio.h>

int main() {
    char s[51];
    int len = 0, max_len = 0;

    scanf("%s", s);

    while (s[len] != '\0') len++;

    for (int l = 2; l <= len; l += 2) {
        for (int i = 0; i + l <= len; i++) {
            int mid = i + l / 2, left_sum = 0, right_sum = 0;

            for (int j = 0; j < l / 2; j++) {
                left_sum += s[i + j] - '0';
                right_sum += s[mid + j] - '0';
            }

            if (left_sum == right_sum && l > max_len) {
                max_len = l;
            }
        }
    }

    printf("%d\n", max_len);

}
