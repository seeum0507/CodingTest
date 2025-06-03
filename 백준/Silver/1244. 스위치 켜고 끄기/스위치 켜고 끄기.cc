#include <stdio.h>

int main() {
    int n, sw[101], student, gender, num;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &sw[i]);
    }

    scanf("%d", &student);
    for (int s = 0; s < student; s++) {
        scanf("%d %d", &gender, &num);

        if (gender == 1) {  
            for (int i = num; i <= n; i += num) {
                sw[i] = 1 - sw[i];  
            }
        } else if (gender == 2) {  
            int left = num - 1, right = num + 1;
            while (left >= 1 && right <= n && sw[left] == sw[right]) {
                left--;
                right++;
            }
            for (int i = left + 1; i <= right - 1; i++) {
                sw[i] = 1 - sw[i];  
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        printf("%d ", sw[i]);
        if (i % 20 == 0) printf("\n");
    }
}
