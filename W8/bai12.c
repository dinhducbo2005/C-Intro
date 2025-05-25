#include <stdio.h>
#include <math.h>
int main() {
    int N, dec=0, du, count=0;
    scanf("%d", &N);
    while (N>0) {
        du = N%10;
        dec = dec + du*pow(2, count);
        count++;
        N/=10;
    }
    printf("%d", dec);
}
