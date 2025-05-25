#include <stdio.h>
#include <math.h>
int main() {
    int n, pt=0;
    int sum = 0;

    printf("Nhap n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        pt+=9*pow(10, i);
        sum+=pt;
    }
    printf("S = %d", sum);
}