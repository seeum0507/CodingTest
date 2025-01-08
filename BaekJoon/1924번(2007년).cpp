#include <stdio.h>

int main() {
    int x, y, days_in_month[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }, total_days = 0, day_index;

    char days[7][4] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };

    scanf("%d %d", &x, &y);


    for (int i = 1; i < x; i++) {
        total_days += days_in_month[i];
    }

    total_days += y;

    day_index = (total_days - 1) % 7;

    printf("%s\n", days[day_index]);

}
