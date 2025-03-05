#include <stdio.h>

int main() {
    int n, front = 0, rear, result[1000], queue[2 * n];
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        queue[i] = i + 1;
    }
    rear = n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            queue[rear % (2 * n)] = queue[front % (2 * n)];
            rear++;
            front++;
        }
        result[queue[front % (2 * n)] - 1] = i;
        front++;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", result[i]);
    }
}
