#include <stdio.h>
int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    printf("Tam giac Floyd:\n");
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            if ((i+j)%2==0) {
                printf("1 ");
            } else printf("0 ");
        }
        printf("\n");
    }

}