#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    char nums[num][101];
    int len;

    for (int i = 0; i < num; i++) {
        scanf("%s", nums[i]);
    }

    len = 0;
    while (nums[0][len] != '\0') {
        len++;
    }

    for (int k = 1; k <= len; k++) {
        int unique = 1;

        for (int i = 0; i < num; i++) {
            for (int j = i + 1; j < num; j++) {
                int equal = 1;
                for (int l = 0; l < k; l++) {
                    if (nums[i][len - k + l] != nums[j][len - k + l]) {
                        equal = 0;
                        break;
                    }
                }
                if (equal == 1) {
                    unique = 0;
                    break;
                }
            }
            if (unique == 0) {
                break;
            }
        }

        if (unique == 1) {
            printf("%d\n", k);
            return 0;
        }
    }

    return 0;
}
