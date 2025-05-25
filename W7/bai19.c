#include <stdio.h>
int main() {
    int n, m, u, b;
    int ucln=0, bcnn=0;
    printf("Nhap so N: ");
    scanf(" %d", &n);
    printf("Nhap so M: ");
    scanf(" %d", &m);

    if (n<m) {
        u = n;
    } else u = m;
    for (int i=1; i<=u; i++) {
        if (n%i==0 && m%i==0) {
            ucln=i;
        }
    }

    if (n<m) {
        b=m;
    } else b=n;
    for (int i=b; ;i++) {
        if (i%n==0 && i%m==0) {
            bcnn=i;
            break;
        }
    }
    printf("UCLN la: %d\nBCNN la: %d", ucln, bcnn);
}