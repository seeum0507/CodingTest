#include <stdio.h>

int main() {
    int n, i, j, k, max_count = 0, count[1000] = { 0 };
    char books[1000][51], result[51];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", books[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            int is_same = 1;
            for (k = 0; books[i][k] != '\0' || books[j][k] != '\0'; k++) {
                if (books[i][k] != books[j][k]) {
                    is_same = 0;
                    break;
                }
            }
            if (is_same) {
                count[i]++;
            }
        }
        count[i]++;
    }

    for (i = 0; i < 51; i++) {
        result[i] = books[0][i];
    }
    max_count = count[0];

    for (i = 1; i < n; i++) {
        int is_less = 0;
        if (count[i] > max_count) {
            is_less = 1;
        }
        else if (count[i] == max_count) {
            for (j = 0; books[i][j] != '\0' || result[j] != '\0'; j++) {
                if (books[i][j] < result[j]) {
                    is_less = 1;
                    break;
                }
                else if (books[i][j] > result[j]) {
                    break;
                }
            }
        }
        if (is_less) {
            max_count = count[i];
            for (j = 0; books[i][j] != '\0'; j++) {
                result[j] = books[i][j];
            }
            result[j] = '\0';
        }
    }

    printf("%s\n", result);
}
