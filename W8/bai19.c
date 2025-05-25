//Ham arctanx
#include <stdio.h>
#include <math.h>
int main() {
    float x, n, i=1;
    scanf("%f", &x);
    scanf("%f", &n);
    float ts = x, sum = x, pt;
    float eps = pow (10, -n);
    do {
        i+=2;
        ts = (-1)*ts*x*x;
        pt = ts/i;
        sum+=pt;
    } while (fabs(pt)>=eps);
    printf("%.2f", sum);
}