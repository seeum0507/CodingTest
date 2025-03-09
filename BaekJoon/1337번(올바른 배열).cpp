#include <stdio.h>

int main() {
    int n, i, j, min_add = 50, arr[50];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        int cnt = 0, num = arr[i];

        for (j = 1; j < 5; j++) {
            int found = 0;

            for (int k = 0; k < n; k++) {
                if (arr[k] == num + j) {
                    found = 1;
                    break;
                }
            }

            if (!found) cnt++;
        }

        if (cnt < min_add) min_add = cnt;
    }

    printf("%d\n", min_add);
}
