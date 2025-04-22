#include <stdio.h>

int main() {
    int n, queue[2000], front = 0, rear;

    scanf("%d", &n);
    rear = n;

    for (int i = 0; i < n; i++) {
        queue[i] = i + 1;
    }

    while (front < rear - 1) {
        printf("%d ", queue[front]);
        front++;
        queue[rear] = queue[front];
        rear++;
        front++;
    }

    printf("%d\n", queue[front]);

    return 0;
}
