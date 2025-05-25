#include <stdio.h>
int main() {
    int a[10][10], i, j;
    for (i=1; i<=10; i++) {
        for (j=1; j<=10; j++) {
            a[i][j]=i*j;
        }
    }
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d x %d = %d", m, n, a[m][n]);
    return 0;
}
