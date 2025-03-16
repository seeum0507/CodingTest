#include <stdio.h>

int main() {
    int n, k, index = 0, count = 0, arr[1000];
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("<");
    while (count < n) {
        int step = k;
        while (step--) {
            while (arr[index] == 0) {
                index = (index + 1) % n;
            }
            if (step == 0) break;
            index = (index + 1) % n;
        }

        printf("%d", arr[index]);
        arr[index] = 0;
        count++;

        if (count < n) {
            printf(", ");
        }
        index = (index + 1) % n;
    }
    printf(">\n");

}
