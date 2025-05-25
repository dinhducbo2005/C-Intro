#include <stdio.h>

int is_CheckQueen(int chess[100][100], int n) {
    //Kiem tra hang va cot
    for (int i=0; i<n; i++) {
        int row = 0;
        int column = 0;
        for (int j=0; j<n; j++) {
            row += chess[i][j];
            column += chess[j][i];
        }
        if (row > 1) return 0;
        if (column > 1) return 0;
    }

    //Kiem tra duong cheo chinh
    int dc1[100] = {0};
    int dc2[100] = {0};
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (chess[i][j] == 1) {
                int d1 = i - j + n;
                int d2 = i + j;
                if (dc1[d1] == 1) return 0;
                if (dc2[d2] == 1) return 0;
            }
        } 
    }
    
    return 1;
}

int main() {
    static int chess[100][100][100], n[100], t;
    //Nhap so truong hop can kiem tra
    scanf("%d", &t);
    //Nhap ban co
    for (int i=0; i<t; i++) {
        scanf("%d", &n[i]);
        for (int j=0; j<n[i]; j++) {
            for (int k=0; k<n[i]; k++) {
                scanf("%d", &chess[i][j][k]);
            }
        }
    }

    for (int i=0; i<t; i++) {
        if (is_CheckQueen(chess[i], n[i])) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}