#include <stdio.h>

int main() {
    char word1[1001], word2[1001];
    int count1[26] = {0}, count2[26] = {0}, i, diff = 0;

    scanf("%s", word1);
    scanf("%s", word2);

    for (i = 0; word1[i] != '\0'; i++) {
        count1[word1[i] - 'a']++;
    }

    for (i = 0; word2[i] != '\0'; i++) {
        count2[word2[i] - 'a']++;
    }

    for (i = 0; i < 26; i++) {
        if (count1[i] > count2[i]) {
            diff += count1[i] - count2[i];
        } else {
            diff += count2[i] - count1[i];
        }
    }

    printf("%d\n", diff);
}
