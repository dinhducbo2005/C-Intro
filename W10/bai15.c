#include <stdio.h>

int main() {
    int n, a[10], x, k;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    int tmp;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            if (a[i]>a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i=0; i<n; i++) {
        if (a[i]>x) {
            k=i;
            break;
        }
    }
    printf("%d", k);
}
