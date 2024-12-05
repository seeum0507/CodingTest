#include <stdio.h>
#define LEN_INPUT 20

int main() {
    char str[LEN_INPUT];
    int num;

    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%s", str);
        for (int k = 0; str[k] != '\0'; k++) {
            if (str[k] >= 'A' && str[k] <= 'Z') {
                str[k] += 32;
            }
        }
        printf("%s\n", str);
    }

}
