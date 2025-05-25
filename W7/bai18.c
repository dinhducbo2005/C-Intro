#include <stdio.h>

int main() {
    int n, f1=0, f2=1, f3;
    printf("So Fibonacci thu: ");
    scanf("%d", &n);
    printf("So do la: ");
    if (n==0) {
        printf("0");
    } else if (n==1) {
        printf("1");
    } else {
        for (int i=1; i<=n; i++) {
            f3 = f1+f2;
            f1=f2;
            f2=f3;
        }
        printf("%d", f3);
    }
}