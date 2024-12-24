#include <stdio.h>

int main() {
    char octopus_num[9];
    int i, length, result, multiplier;

    while (1) {

        scanf("%s", octopus_num);


        if (octopus_num[0] == '#' && octopus_num[1] == '\0') {
            break;
        }


        length = 0;
        while (octopus_num[length] != '\0') {
            length++;
        }

        result = 0;
        multiplier = 1;

        for (i = length - 1; i >= 0; i--) {

            int value = 0;
            if (octopus_num[i] == '-') value = 0;
            if (octopus_num[i] == '\\') value = 1;
            if (octopus_num[i] == '(') value = 2;
            if (octopus_num[i] == '@') value = 3;
            if (octopus_num[i] == '?') value = 4;
            if (octopus_num[i] == '>') value = 5;
            if (octopus_num[i] == '&') value = 6;
            if (octopus_num[i] == '%') value = 7;
            if (octopus_num[i] == '/') value = -1;


            result += value * multiplier;


            multiplier *= 8;
        }


        printf("%d\n", result);
    }


}
