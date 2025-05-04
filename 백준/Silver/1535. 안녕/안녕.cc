#include <stdio.h>

int main() {
    int n, lose[20], joy[20], max_joy = 0;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &lose[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &joy[i]);
    }

    for (int mask = 0; mask < (1 << n); mask++) {
        int hp = 100, total_joy = 0;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                hp -= lose[i];
                if (hp <= 0) break;
                total_joy += joy[i];
            }
        }

        if (hp > 0 && total_joy > max_joy) {
            max_joy = total_joy;
        }
    }

    printf("%d\n", max_joy);
}
