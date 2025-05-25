#include <stdio.h>
#include <math.h>
int main() {
    float x, n, sum=1.0, pt=1, i=0;
    scanf("%f", &x);
    scanf("%f", &n);
    float eps = pow (10, -n);
    do {
        i+=2;
        pt = pt*(-1)*x*x/(i-1)/i;
        sum+=pt;
    } while (fabs(pt)>=eps);
    printf("%.2f", sum);
}