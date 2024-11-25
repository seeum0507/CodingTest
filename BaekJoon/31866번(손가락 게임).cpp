#include<stdio.h>

int main() {
    int Junseong, Ikjun;
    scanf("%d %d", &Junseong, &Ikjun);

    int valid_js = (Junseong == 0 || Junseong == 2 || Junseong == 5);
    int valid_ij = (Ikjun == 0 || Ikjun == 2 || Ikjun == 5);

    if (!valid_js && !valid_ij) {
        printf("=\n");
    }
    else if (!valid_js) {
        printf("<\n");
    }
    else if (!valid_ij) {
        printf(">\n");
    }
    else if (Junseong == Ikjun) {
        printf("=\n");
    }
    else if ((Junseong == 0 && Ikjun == 2) || (Junseong == 2 && Ikjun == 5) || (Junseong == 5 && Ikjun == 0)) {
        printf(">\n");
    }
    else {
        printf("<\n");
    }

}
