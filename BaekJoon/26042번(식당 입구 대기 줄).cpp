#include <stdio.h>

int main() {
    int n, queue[100001], front = 0, rear = 0, maxWait = 0, maxRear = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            int a;
            scanf("%d", &a);
            queue[rear++] = a;
        }
        else if (type == 2) {
            front++;
        }

        if (rear - front > maxWait) {
            maxWait = rear - front;
            maxRear = queue[rear - 1];
        }
        else if (rear - front == maxWait && queue[rear - 1] < maxRear) {
            maxRear = queue[rear - 1];
        }
    }

    printf("%d %d\n", maxWait, maxRear);

    return 0;
}
