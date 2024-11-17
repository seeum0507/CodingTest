#include<stdio.h>
int main() {
    int human, meter, article_human, answer;
    scanf("%d %d", &human, &meter);
    for (int i = 0; i < 5; i++) {
        scanf("%d", &article_human);
        answer = article_human - human * meter;
        printf("%d ", answer);
    }
}