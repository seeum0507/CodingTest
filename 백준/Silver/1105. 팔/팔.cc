#include <stdio.h>

int main() {
    int L, R, i, min8 = 1000000000, now8, temp;
    
    scanf("%d %d", &L, &R);
    
    for (i = L; i <= R; i++) {
        temp = i;
        now8 = 0;
        
        while (temp > 0) {
            if (temp % 10 == 8) {
                now8++;
            }
            temp = temp / 10;
        }
        
        if (now8 < min8) {
            min8 = now8;
        }
        
        if (min8 == 0) {
            break;
        }
    }
    
    printf("%d\n", min8);
}
