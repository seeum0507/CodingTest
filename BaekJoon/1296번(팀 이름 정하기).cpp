#include <stdio.h>

int main() {
    char name[21], team_name[21], best_team[21];
    int N, L, O, V, E, max_probability = -1, prob;

    scanf("%s", name);
    scanf("%d", &N);

    best_team[0] = '\0';

    for (int i = 0; i < N; i++) {
        scanf("%s", team_name);

        L = 0; O = 0; V = 0; E = 0;

        for (int j = 0; name[j] != '\0'; j++) {
            if (name[j] == 'L') L++;
            if (name[j] == 'O') O++;
            if (name[j] == 'V') V++;
            if (name[j] == 'E') E++;
        }

        for (int j = 0; team_name[j] != '\0'; j++) {
            if (team_name[j] == 'L') L++;
            if (team_name[j] == 'O') O++;
            if (team_name[j] == 'V') V++;
            if (team_name[j] == 'E') E++;
        }

        prob = (L + O) * (L + V) * (L + E) * (O + V) * (O + E) * (V + E) % 100;

        if (prob > max_probability) {
            max_probability = prob;
            int k = 0;
            while (team_name[k] != '\0') {
                best_team[k] = team_name[k];
                k++;
            }
            best_team[k] = '\0';
        }
        else if (prob == max_probability) {
            int j = 0;
            while (team_name[j] != '\0' && best_team[j] != '\0' && team_name[j] == best_team[j]) {
                j++;
            }
            if (team_name[j] < best_team[j]) {
                int k = 0;
                while (team_name[k] != '\0') {
                    best_team[k] = team_name[k];
                    k++;
                }
                best_team[k] = '\0';
            }
        }
    }

    printf("%s\n", best_team);

}
