#include <stdio.h>

int main() {
    int t, is_anagram = 1;
    char a[101], b[101], a_copy[101], b_copy[101];

    scanf("%d", &t);

    while (t--) {
        int len_a = 0, len_b = 0, i, j;
        char temp;

        scanf("%s %s", a, b);

        for (i = 0; a[i] != '\0'; i++) {
            a_copy[i] = a[i];
        }
        a_copy[i] = '\0';
        for (i = 0; b[i] != '\0'; i++) {
            b_copy[i] = b[i];
        }
        b_copy[i] = '\0';

        while (a[len_a]) len_a++;
        while (b[len_b]) len_b++;

        if (len_a != len_b) {
            printf("%s & %s are NOT anagrams.\n", a_copy, b_copy);
            continue;
        }

        for (i = 0; i < len_a - 1; i++) {
            for (j = i + 1; j < len_a; j++) {
                if (a[i] > a[j]) {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }

        for (i = 0; i < len_b - 1; i++) {
            for (j = i + 1; j < len_b; j++) {
                if (b[i] > b[j]) {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for (i = 0; i < len_a; i++) {
            if (a[i] != b[i]) {
                is_anagram = 0;
                break;
            }
        }

        if (is_anagram) {
            printf("%s & %s are anagrams.\n", a_copy, b_copy);
        }
        else {
            printf("%s & %s are NOT anagrams.\n", a_copy, b_copy);
        }
    }
}
