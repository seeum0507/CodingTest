#include <stdio.h>

int main() {
    char N[11];
    scanf("%s", N);


    int length = 0;
    while (N[length] != '\0') {
        length++;
    }


    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (N[j] < N[j + 1]) {
                char temp = N[j];
                N[j] = N[j + 1];
                N[j + 1] = temp;
            }
        }
    }

    printf("%s\n", N);

    return 0;
}
