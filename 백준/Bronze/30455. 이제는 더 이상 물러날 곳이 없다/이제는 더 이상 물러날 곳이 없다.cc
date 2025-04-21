#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if (N % 2 == 0) {
        printf("Duck\n");
    } else {
        printf("Goose\n");
    }

    return 0;
}
