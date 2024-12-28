#include <stdio.h>

int main() {
    char name[51];
    int count[26] = { 0 };
    int len = 0, oddCount = 0, index = 0;
    char oddChar = 0, result[51];

    scanf("%s", name);

    while (name[len] != '\0') {
        count[name[len] - 'A']++;
        len++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 == 1) {
            oddCount++;
            oddChar = 'A' + i;
        }
        for (int j = 0; j < count[i] / 2; j++) {
            result[index++] = 'A' + i;
        }
    }

    if (oddCount > 1) {
        printf("I'm Sorry Hansoo\n");
        return 0;
    }

    for (int i = 0; i < index; i++) {
        printf("%c", result[i]);
    }

    if (oddChar) {
        printf("%c", oddChar);
    }

    for (int i = index - 1; i >= 0; i--) {
        printf("%c", result[i]);
    }

    return 0;
}
