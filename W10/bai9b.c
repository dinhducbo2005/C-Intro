#include <stdio.h>

int main() {
    int n, a[10], current=0, max=0;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        if (a[i]==0) {
            current++;
            if (current > max) {
                max = current;
            }
        } else current = 0;
    }
    printf("%d", max);
}