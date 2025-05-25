#include <stdio.h>
#include <math.h>
int main() {
    long long int N, hex = 0, luythua=1, d8, d2, base;
    scanf("%lld", &N);
    while (N > 0) {
        int group = N % 1000; 
        N = N / 1000;

        d8 = 0, base = 1;
        while (group > 0) {
            int digit = group % 10;
            d8 += digit * base;
            base *= 2;
            group /= 10;
        }

        hex = hex + d8 * luythua;
        luythua *= 10;
    }
    printf("%lld", hex);
}