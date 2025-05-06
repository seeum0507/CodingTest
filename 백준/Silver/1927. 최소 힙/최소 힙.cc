#include <stdio.h>

int main() {
    int n, heap[100001], size = 0;
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);

        if (x > 0) {
            size++;
            heap[size] = x;

            int current = size;
            while (current > 1 && heap[current] < heap[current / 2]) {
                int temp = heap[current];
                heap[current] = heap[current / 2];
                heap[current / 2] = temp;
                current = current / 2;
            }
        } else {
            if (size == 0) {
                printf("0\n");
            } else {
                printf("%d\n", heap[1]);

                heap[1] = heap[size];
                size--;

                int current = 1;
                while (1) {
                    int left = current * 2;
                    int right = current * 2 + 1;
                    int smallest = current;

                    if (left <= size && heap[left] < heap[smallest]) {
                        smallest = left;
                    }
                    if (right <= size && heap[right] < heap[smallest]) {
                        smallest = right;
                    }

                    if (smallest == current) break;

                    int temp = heap[current];
                    heap[current] = heap[smallest];
                    heap[smallest] = temp;

                    current = smallest;
                }
            }
        }
    }

}
