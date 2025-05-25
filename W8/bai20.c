//Ham sinx
#include <stdio.h>
#include <math.h>
int main() {
    float x, n, i=1;
    scanf("%f", &x);
    scanf("%f", &n);
    float pt = x, sum = x;
    float eps = pow (10, -n);
    do {
        i+=2;
        pt = pt*(-1)*x*x/(i-1)/i;
        sum+=pt;
    } while (fabs(pt)>=eps);
    printf("%.2f", sum);
}