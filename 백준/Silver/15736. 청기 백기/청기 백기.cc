#include <stdio.h>

int main() {
    unsigned int N, i = 1, count = 0;
    scanf("%u", &N);


    while (i * i <= N) {
        count++;
        i++;
    }

    printf("%u\n", count);

}
