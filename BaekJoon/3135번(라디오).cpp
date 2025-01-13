#include <stdio.h>

int main() {
    int A, B, N, min_presses, fav_presses, fav_freq[5];

    scanf("%d %d", &A, &B);
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &fav_freq[i]);
    }

    min_presses = (A > B) ? (A - B) : (B - A);

    for (int i = 0; i < N; i++) {
        fav_presses = (B > fav_freq[i]) ? (B - fav_freq[i]) : (fav_freq[i] - B);
        fav_presses += 1;
        if (fav_presses < min_presses) {
            min_presses = fav_presses;
        }
    }

    printf("%d\n", min_presses);
}
