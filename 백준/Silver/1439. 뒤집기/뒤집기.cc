#include <stdio.h>

int main() {
    char s[1000001];
    int i = 0, zero_group = 0, one_group = 0;
    scanf("%s", s);

    if (s[0] == '0') {
        zero_group++;
    } else {
        one_group++;
    }

    while (s[i] != '\0') {
        if (s[i] != s[i + 1]) {
            if (s[i + 1] == '0') {
                zero_group++;
            } else if (s[i + 1] == '1') {
                one_group++;
            }
        }
        i++;
    }

    if (zero_group < one_group) {
        printf("%d\n", zero_group);
    } else {
        printf("%d\n", one_group);
    }
}
