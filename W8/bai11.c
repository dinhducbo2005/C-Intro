#include <stdio.h>
#include <math.h>
int main() {
    int N, du, bin=0, count=0;
    scanf("%d", &N);
    while (N>0) {
        du = N%2;
        bin = bin + du*pow(10, count);
        count++;
        N = N/2;
    }
    printf("%d", bin);
}