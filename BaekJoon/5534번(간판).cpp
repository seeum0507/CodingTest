#include <stdio.h>

int main() {
    int N, count = 0, sign_len = 0, name_len = 0;
    char name[26], sign[101];

    scanf("%d %s", &N, name);

    while (name[name_len]) name_len++;

    while (N--) {
        scanf("%s", sign);

        while (sign[sign_len]) sign_len++;

        for (int gap = 1; gap * (name_len - 1) < sign_len; gap++) {
            for (int start = 0; start < sign_len; start++) {
                int idx = start, match = 1;
                for (int i = 0; i < name_len; i++) {
                    if (idx >= sign_len || sign[idx] != name[i]) {
                        match = 0;
                        break;
                    }
                    idx += gap;
                }
                if (match) {
                    count++;
                    goto next_sign;
                }
            }
        }
    next_sign:;
    }

    printf("%d\n", count);

}
