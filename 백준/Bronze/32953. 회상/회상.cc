#include <stdio.h>

int main() {
    int n, m, student_count, student_id, i, j, count[20000000] = {0};
    scanf("%d %d", &n, &m);


    for (i = 0; i < n; i++) {
        scanf("%d", &student_count);
        for (j = 0; j < student_count; j++) {
            scanf("%d", &student_id);
            count[student_id]++;
        }
    }

    int answer = 0;
    for (i = 10000000; i < 20000000; i++) {
        if (count[i] >= m) {
            answer++;
        }
    }

    printf("%d\n", answer);
}
