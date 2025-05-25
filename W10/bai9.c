#include <stdio.h>
int main() {
    int n, a[10], count_0=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if (a[i]==0) count_0++;
    }
    printf("%d", count_0);
    return 0;
}