#include <stdio.h>

int main() {
    int n, k1, k2, m;
    int a[100][100];
    int b[100][100];
    int c[100][100];
    //Nhap ma tran A
    scanf("%d %d", &n, &k1);
    for (int i=0; i<n; i++) {
        for (int j=0; j<k1 ;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    //Nhap ma tran B
    scanf("%d %d", &k2, &m);
    for (int i=0; i<k2; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            c[i][j] = 0;
            for (int k=0; k<k1; k++) {
                c[i][j] += (a[i][k]*b[k][j]);
            }
        }
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}