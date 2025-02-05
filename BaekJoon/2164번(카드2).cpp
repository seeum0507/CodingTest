#include <stdio.h>

int main() {
    int n, front = 0, rear, queue[1000000];
    scanf("%d", &n);

    for (rear = 0; rear < n; rear++) {
        queue[rear] = rear + 1;
    }

    while (rear - front > 1) {
        front++;
        queue[rear] = queue[front];
        rear++;
        front++;
    }

    printf("%d\n", queue[front]);
}
