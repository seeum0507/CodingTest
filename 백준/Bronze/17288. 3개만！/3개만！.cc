#include <stdio.h>

int main() {
    char s[101];
    int i, count = 0;

    scanf("%s", s);

    for (i = 0; s[i + 2] != '\0'; i++) {
        if (s[i + 1] == s[i] + 1 && s[i + 2] == s[i] + 2) {
            if (s[i + 3] == s[i] + 3) {
                while (s[i + 1] == s[i] + 1) {
                    i++;
                }
            } else {
                count++;
                i += 2;
            }
        }
    }

    printf("%d\n", count);
}
