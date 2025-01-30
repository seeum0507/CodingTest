#include <stdio.h>

int main() {
    int n, m, count = 0;
    char floor[50][50];
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++) scanf("%s", floor[i]);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (floor[i][j] == '-') {
                count++;
                while (j < m && floor[i][j] == '-') j++;
            }

    for (int j = 0; j < m; j++)
        for (int i = 0; i < n; i++)
            if (floor[i][j] == '|') {
                count++;
                while (i < n && floor[i][j] == '|') i++;
            }

    printf("%d\n", count);
}
