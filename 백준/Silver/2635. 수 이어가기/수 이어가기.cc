#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    int max_len = 0, best_seq[1000];

    for (int b = 1; b <= a; b++) {
        int temp[1000];
        temp[0] = a;
        temp[1] = b;
        int count = 2;

        while (1) {
            int next = temp[count - 2] - temp[count - 1];
            if (next < 0) break;
            temp[count] = next;
            count++;
        }

        if (count > max_len) {
            max_len = count;
            for (int i = 0; i < count; i++) {
                best_seq[i] = temp[i];
            }
        }
    }

    printf("%d\n", max_len);
    for (int i = 0; i < max_len; i++) {
        printf("%d", best_seq[i]);
        if (i != max_len - 1) printf(" ");
    }

}
