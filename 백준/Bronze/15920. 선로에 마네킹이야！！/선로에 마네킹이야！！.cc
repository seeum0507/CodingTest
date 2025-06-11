#include <stdio.h>

int main() {
    int N, i;
    char S[11];

    scanf("%d", &N);
    scanf("%s", S);

    int pos = 0, lever = 0, lever_pulled_at_B = 0, mannequins = 5;

    for (i = 0; i < N; i++) {
        if (S[i] == 'P') {
            lever = 1 - lever;
            if (pos == 1) lever_pulled_at_B = 1;
        } else if (S[i] == 'W') {
            if (pos == 0) {
                pos = 1;
                mannequins = (lever == 0) ? 5 : 1;
            } else if (pos == 1) {
                pos = 2;
                if (lever_pulled_at_B) mannequins = 6;
            }
        }
    }

    if (pos == 2) printf("%d\n", mannequins);
    else printf("0\n");

}
