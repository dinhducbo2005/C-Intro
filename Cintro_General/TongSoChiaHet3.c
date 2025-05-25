#include <stdio.h> 
int main() {
    int n, a[100], sum = 0;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    if (n<1 || n>100) {
        printf("INVALID\n");
    } else {
        for (int i=0; i<n; i++) {
            if (a[i] % 3 == 0) sum += a[i];
        }
        printf("%d", sum);
    }
    return 0;
}