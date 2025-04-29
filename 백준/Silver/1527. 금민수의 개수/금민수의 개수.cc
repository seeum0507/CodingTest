#include <stdio.h>

int main() {
    int A, B, count = 0, top = 0;
    long long stack[1024];

    scanf("%d %d", &A, &B);

    stack[top++] = 4;
    stack[top++] = 7;

    while (top > 0) {
        long long current = stack[--top];

        if (current > B) continue;
        if (current >= A) count++;

        stack[top++] = current * 10 + 4;
        stack[top++] = current * 10 + 7;
    }

    printf("%d\n", count);
}
