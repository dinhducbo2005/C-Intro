#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int x=-n;
    for (int i=x; i<=-1; i++) {
        if (n%i==0) {
            printf("%d ", i);
        }
    }
    for (int i=1; i<=n; i++) {
        if (n%i==0) {
            printf("%d ", i);
        }
    }
    return 0;
}