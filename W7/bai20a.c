#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int i, j;
    for (i=1; i<=n; i++) {
        for (j=i; j<=n+i-1; j++) {
            printf("%2d", j);
        }
        printf("\n");
    }
    return 0;
}