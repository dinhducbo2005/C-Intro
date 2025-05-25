#include <stdio.h>

int main() {
    int n;
    int i;
    int sum = 0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        int x;
        scanf("%d", &x);
        sum += x*x;
    }
    printf("%d", sum);

}