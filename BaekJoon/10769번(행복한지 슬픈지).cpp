#include <stdio.h>

int main() {
    char str[256];
    int happyCount = 0, sadCount = 0, i = 0;

    scanf("%[^\n]", str);

    while (str[i] != '\0') {
        if (str[i] == ':' && str[i + 1] == '-' && str[i + 2] == ')') {
            happyCount++;
            i += 2;
        }
        else if (str[i] == ':' && str[i + 1] == '-' && str[i + 2] == '(') {
            sadCount++;
            i += 2;
        }
        i++;
    }

    if (happyCount == 0 && sadCount == 0) {
        printf("none\n");
    }
    else if (happyCount == sadCount) {
        printf("unsure\n");
    }
    else if (happyCount > sadCount) {
        printf("happy\n");
    }
    else {
        printf("sad\n");
    }

    return 0;
}
