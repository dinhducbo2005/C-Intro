#include <stdio.h>
int main() {
    int a[100][100], n, m, dem0=0, dem=0;
    printf("Nhap kich thuoc mang: ");
    scanf("%d %d", &n, &m);
    printf("Nhap phan tu cua mang:\n");
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j]==0) {
                dem0++;
            } else dem++;
        }
    }
    printf("Co phai ma tran thua khong: ");
    if (dem0>dem) {
        printf("YES\n");
    } else printf("NO\n");
    return 0;
}