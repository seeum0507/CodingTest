#include <stdio.h>

int main() {
    int n, info[10], result [10] = {0};

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &info[i]);
    }

    for (int i = 0; i < n; i++) {
        int count = info[i];
        for (int j = 0; j < n; j++) {
            if (result[j] == 0) {
                if (count == 0) {
                    result[j] = i + 1;
                    break;
                }
                count--;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }

}
