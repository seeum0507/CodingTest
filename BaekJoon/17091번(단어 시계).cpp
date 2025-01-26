#include <stdio.h>

int main() {
    int h, m;
    char words[30][15] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
        "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three",
        "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine"
    };

    scanf("%d %d", &h, &m);

    if (m == 0) {
        printf("%s o' clock\n", words[h]);
    }
    else if (m <= 30) {
        if (m == 15) {
            printf("quarter past %s\n", words[h]);
        }
        else if (m == 30) {
            printf("half past %s\n", words[h]);
        }
        else if (m == 1) {
            printf("one minute past %s\n", words[h]);
        }
        else {
            printf("%s minutes past %s\n", words[m], words[h]);
        }
    }
    else {
        int to_m = 60 - m;
        int next_h = h == 12 ? 1 : h + 1;
        if (to_m == 15) {
            printf("quarter to %s\n", words[next_h]);
        }
        else if (to_m == 1) {
            printf("one minute to %s\n", words[next_h]);
        }
        else {
            printf("%s minutes to %s\n", words[to_m], words[next_h]);
        }
    }

    return 0;
}
