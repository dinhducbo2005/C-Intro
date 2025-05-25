#include <stdio.h>

int main() {
    int n;
    printf("Nhap so N: ");
    scanf("%d", &n);
    printf("\n");
    int i, j, k=1;
    for(i=1; i<=n; i++) {
        for (j=1; j<=i; j++) {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }

}
