#include <stdio.h>

int main() {
    int N, count = 0;
    scanf("%d", &N);

    int problems[N], penalty[N];

    for (int i = 0; i < N; i++) {
        scanf("%d %d", &problems[i], &penalty[i]);
    }

    int targetProblems = problems[4];


    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (problems[i] < problems[j] || (problems[i] == problems[j] && penalty[i] > penalty[j])) {
                int tempProblems = problems[i], tempPenalty = penalty[i];
                problems[i] = problems[j];
                penalty[i] = penalty[j];
                problems[j] = tempProblems;
                penalty[j] = tempPenalty;
            }
        }
    }


    for (int i = 5; i < N; i++) {
        if (problems[i] == targetProblems) {
            count++;
        }
        else {
            break;
        }
    }

    printf("%d\n", count);
}
