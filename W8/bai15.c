#include <stdio.h>
#include <math.h>
int main() {
    float x, n, sum=1.0, pt=1.0, i=1.0;
    scanf("%f", &x);
    scanf("%f", &n);
    float eps = pow (10, -n);
    do {
        pt = pt*x/(i);
        sum+=pt;
        i+=1;
    } while (fabs(pt)>=eps);
    printf("%.2f", sum);
}