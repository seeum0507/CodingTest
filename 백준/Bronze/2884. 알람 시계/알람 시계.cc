#include <stdio.h>

int main() {
    int hour, minute;

    scanf("%d %d", &hour, &minute);

    minute = minute - 45;

    if (minute < 0) {
        minute = minute + 60;
        hour = hour - 1;

        if (hour < 0) {
            hour = 23;
        }
    }

    printf("%d %d\n", hour, minute);
    return 0;
}
