#include <stdio.h>
#include <string.h>

int main() {
    int num, error;
    char sentence[81];

    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d %s", &error, sentence);

        for (int j = error - 1; sentence[j] != '\0'; j++) {
            sentence[j] = sentence[j + 1];
        }

        printf("%s\n", sentence);
    }

    return 0;
}
