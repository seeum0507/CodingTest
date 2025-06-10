#include <stdio.h>

int main() {
    int n, k, arr[5000];
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) arr[i] = i + 1;

    int idx = 0, cnt = n;
    printf("<");
    while (cnt > 0) {
        for (int i = 0; i < k - 1; ) {
            if (arr[idx] != 0) i++;
            idx = (idx + 1) % n;
        }

        while (arr[idx] == 0) idx = (idx + 1) % n;

        printf("%d", arr[idx]);
        arr[idx] = 0;
        cnt--;

        if (cnt > 0) printf(", ");
    }
    printf(">\n");
}
