#include <stdio.h>

int main() {
    char s[10];
    int i, plus_pos = -1;

    scanf("%s", s);

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == '+') {
            plus_pos = i;
            break;
        }
    }

    if (plus_pos <= 0 || s[plus_pos + 1] == '\0') {
        printf("No Money\n");
        return 0;
    }

    for (i = 0; s[i] != '\0'; i++) {
        if ((s[i] < '0' || s[i] > '9') && s[i] != '+') {
            printf("No Money\n");
            return 0;
        }
    }

    if (s[0] == '0' || s[plus_pos + 1] == '0') {
        printf("No Money\n");
        return 0;
    }

    for (i = 0; i < plus_pos; i++) {
        if (s[i] != s[plus_pos + i + 1]) {
            printf("No Money\n");
            return 0;
        }
    }

    if (s[plus_pos + plus_pos + 1] != '\0') {
        printf("No Money\n");
        return 0;
    }

    printf("CUTE\n");
}
