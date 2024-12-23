#include <stdio.h>
int main() {
    int row, column, rowCnt = 0, colCnt = 0;
    scanf("%d %d", &row, &column);
    char arr[row][column];


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf(" %c", &arr[i][j]);
        }
    }


    for (int i = 0; i < row; i++) {
        int hasGuard = 0;
        for (int j = 0; j < column; j++) {
            if (arr[i][j] == 'X') {
                hasGuard = 1;
                break;
            }
        }
        if (!hasGuard) rowCnt++;
    }


    for (int j = 0; j < column; j++) {
        int hasGuard = 0;
        for (int i = 0; i < row; i++) {
            if (arr[i][j] == 'X') {
                hasGuard = 1;
                break;
            }
        }
        if (!hasGuard) colCnt++;
    }


    printf("%d\n", rowCnt > colCnt ? rowCnt : colCnt);
}