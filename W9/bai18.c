#include <stdio.h>
void printDiamond(int n) {
    int i, j;
    for (int i=1; i<=n; i++) {
        for (int j=i; j<=n-1; j++) {
            printf(" ");
        }
        for (int k=1; k<=2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=n-1; i>=1; i--) {
        for (int j=1; j<=n-i; j++) {
            printf(" ");
        }
        for (int j=1; j<=2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int x;
    scanf("%d", &x);
    printDiamond(x);
    return 0;
}