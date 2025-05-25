#include <stdio.h>

int highestCommonFactor(int a, int b) {
    int ucln, n;
    if (a>b) n = b;
    else n = a;
    for (int i=1; i<=n; i++) {
        if (a%i==0 && b%i==0) {
            ucln = i;
        }
    }
    return ucln;
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d", highestCommonFactor(a, b));
    return 0;
}