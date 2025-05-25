#include <stdio.h>
int main() {
    int n, count=0;
    float a[1000];
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%f", &a[i]);
        if (a[i]>30.0) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}