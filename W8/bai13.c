#include <stdio.h>
#include <math.h>
int main() {
    long long int N, bin = 0, luythua=1, d8, d2;
    scanf("%lld", &N);
    do {
        d8 = N%10;
        N = N/10;
        switch (d8) {
            case 0: d2 = 0; break;
            case 1: d2 = 1; break;
            case 2: d2 = 10; break;
            case 3: d2 = 11; break;
            case 4: d2 = 100; break;
            case 5: d2 = 101; break;
            case 6: d2 = 110; break;
            case 7: d2 = 111; break;
        }
        bin = bin + d2*luythua;
        luythua*=1000;
    } while (N>0);
    printf("%lld", bin);
}