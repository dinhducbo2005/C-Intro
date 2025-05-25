#include <stdio.h>

int is_Sudoku(int matrix[9][9]) {
    //Kiem tra hang
    for (int i=0; i<9; i++) {
        int row = 0;
        for (int j=0; j<9; j++) {
            row += matrix[i][j];
        }
        if (row != 45) return 0;
    }

    //Kiem tra cot
    for (int i=0; i<9; i++) {
        int column = 0;
        for (int j=0; j<9; j++) {
            column += matrix[j][i];
        }
        if (column != 45) return 0;
    }

    return 1;
}

int main() {
    int n;
    int matrix[100][9][9];

    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        for (int j=0; j<9; j++) {
            for (int k=0; k<9; k++) {
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }

    for (int i=0; i<n; i++) {
        if (is_Sudoku(matrix[i])) {
            printf("1\n");
        } else printf("0\n");
    }

    return 0;
}