#include <stdio.h>
#include <math.h>
int main() {
    int n, pt=0;
    int sum = 0;

    printf("Nhap so n: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        pt+=1*pow(10, i);
        sum+=pt;
    }
    printf("S = %d", sum);
}