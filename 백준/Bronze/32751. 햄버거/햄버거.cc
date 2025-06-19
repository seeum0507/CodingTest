#include <stdio.h>

int main() {
    int n, a, b, c, d;
    char s[100001];
    scanf("%d", &n);
    scanf("%d %d %d %d", &a, &b, &c, &d);
    scanf("%s", s);

    if (s[0] != 'a' || s[n - 1] != 'a') {
        printf("No\n");
        return 0;
    }

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            printf("No\n");
            return 0;
        }
    }

    int a2 = 0, b2 = 0, c2 = 0, d2 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'a') a2++;
        else if (s[i] == 'b') b2++;
        else if (s[i] == 'c') c2++;
        else if (s[i] == 'd') d2++;
    }

    if (a2 > a || b2 > b || c2 > c || d2 > d) {
        printf("No\n");
        return 0;
    }

    printf("Yes\n");
}
