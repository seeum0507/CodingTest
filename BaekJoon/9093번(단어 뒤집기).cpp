#include <stdio.h>

int main() {
    int T, firstWord = 1, length = 0;
    char word[21];
    scanf("%d", &T);
    getchar();

    for (int t = 0; t < T; t++) {
        

        while (scanf("%s", word) == 1) {
            while (word[length] != '\0') {
                length++;
            }
            for (int i = length - 1; i >= 0; i--) {
                printf("%c", word[i]);
            }

            if (getchar() == '\n') {
                break;
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

}
