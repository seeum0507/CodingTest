#include <stdio.h>
#include <string.h>

int main() {
    int num;
    char sentences[100];

    scanf("%d", &num);
    getchar();

    for (int i = 0; i < num; i++) {
        fgets(sentences, sizeof(sentences), stdin);

        sentences[strcspn(sentences, "\n")] = '\0';

        if (strncmp(sentences, "Simon says", 10) == 0) {
            printf("%s\n", sentences + 10);
        }
    }
}
