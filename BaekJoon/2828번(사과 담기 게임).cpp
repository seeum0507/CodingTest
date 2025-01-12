#include <stdio.h>

int main() {
    int N, M, J, i, apple_position, basket_left, basket_right, move_count = 0;

    scanf("%d %d", &N, &M);
    scanf("%d", &J);

    basket_left = 1;
    basket_right = M;

    for (i = 0; i < J; i++) {
        scanf("%d", &apple_position);

        if (apple_position < basket_left) {
            move_count += (basket_left - apple_position);
            basket_right -= (basket_left - apple_position);
            basket_left = apple_position;
        }
        else if (apple_position > basket_right) {
            move_count += (apple_position - basket_right);
            basket_left += (apple_position - basket_right);
            basket_right = apple_position;
        }
    }

    printf("%d\n", move_count);
}
