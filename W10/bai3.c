#include <stdio.h>
int main() {
    int A[10], n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }
    for (int i=n-1; i>=0; i--) {
        printf("%5d", A[i]);
    }
    return 0;
}