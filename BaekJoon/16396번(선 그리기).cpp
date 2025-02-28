#include <stdio.h>

int main() {
    int n, start[10000], end[10000];
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        scanf("%d %d", &start[i], &end[i]);
        if (start[i] > end[i]) {
            int temp = start[i];
            start[i] = end[i];
            end[i] = temp;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (start[i] > start[j]) {
                int temp_start = start[i];
                int temp_end = end[i];
                start[i] = start[j];
                end[i] = end[j];
                start[j] = temp_start;
                end[j] = temp_end;
            }
        }
    }

    int totalLength = 0;
    int currentStart = start[0];
    int currentEnd = end[0];

    for (int i = 1; i < n; i++) {
        if (start[i] <= currentEnd) {
            if (end[i] > currentEnd) {
                currentEnd = end[i];
            }
        }
        else {
            totalLength += (currentEnd - currentStart);
            currentStart = start[i];
            currentEnd = end[i];
        }
    }

    totalLength += (currentEnd - currentStart);

    printf("%d\n", totalLength);
}
