#include <stdio.h>

int DigitAllSame (int n) {
    int digit;
    int chan=1, le=1;
    while (n>0) {
        digit = n%10;
        n = n/10;
        if (digit%2==0) {
            le = 0;
        }
        if (digit%2!=0) {
            chan = 0;
        }
    }
    if (chan==le) return 0;
    else return 1;
}

int main() {
    int n;
    scanf("%d", &n);
    if (DigitAllSame(n) == 1) {
        printf("YES");
    } else printf("NO");
    return 0;
}