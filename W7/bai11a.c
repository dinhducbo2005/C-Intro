#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int i, j, k;
    for (i=1; i<=n; i++) {
        for (j=1; j<=n+1-i; j++) {
            printf(" ");
        }
        for (k=1; k<=i; k++) {
            printf("* ");
        }
        printf("\n");
    }
}