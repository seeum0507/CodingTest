#include<stdio.h>

int main() {
    int num;
    char OX[80];
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        int cnt = 0, sum = 0;
        scanf("%s", OX);

        for (int j = 0; OX[j] != '\0'; j++) {
            if (OX[j] == 'O') {
                cnt++;
                sum += cnt;
            }
            else {
                cnt = 0;
            }
        }
        printf("%d\n", sum);
    }

}
