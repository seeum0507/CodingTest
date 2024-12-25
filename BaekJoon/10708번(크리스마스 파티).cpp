#include <stdio.h>

int main() {
    int people, num;
    scanf("%d %d", &people, &num);

    int mafia[num], point[people], choose[people];


    for (int i = 0; i < people; i++) {
        point[i] = 0;
    }


    for (int i = 0; i < num; i++) {
        scanf("%d", &mafia[i]);
        mafia[i]--;
    }


    for (int i = 0; i < num; i++) {
        int wrong_guesses = 0;

        for (int j = 0; j < people; j++) {
            scanf("%d", &choose[j]);
            choose[j]--;

            if (choose[j] == mafia[i]) {
                point[j]++;
            }
            else {
                wrong_guesses++;
            }
        }


        point[mafia[i]] += wrong_guesses;
    }


    for (int i = 0; i < people; i++) {
        printf("%d\n", point[i]);
    }

}
