#include <stdio.h>
int main() {
    int n, a[1000], dem, x=-1;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i=0; i<n; i++) {
        dem=0;
        for (int j=0; j<n; j++) {
            if (a[i]==a[j]) {
                dem++;
            }
        }
        if (dem > n/2) {
            x = a[i];
            break;
        }
    }
    if (x != -1) {
        printf("%d\n", x);
    } else {
        printf("NO\n");
    }
    return 0;
}