#include <stdio.h>

int main() {
    int n, a[10], check=1;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i=0; i<n/2; i++) {
        if (a[i]!=a[n-1-i]) {
            check = 0;
        }
    }
    if (check==1) {
        printf("YES");
    } else printf("NO");
    return 0;
}