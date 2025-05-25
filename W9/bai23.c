#include <stdio.h>

float myCosh(float x) {
    float pt = 1;
    float sum = 1;
    int n = 1;

    while (1) {
        pt *= x * x / ((2*n-1) * (2*n)); 
        if (pt < 1e-10 && pt > -1e-10)
            break;
        sum += pt;
        n++;
    }

    return sum;
}

int main() {
    float x;
    scanf("%f", &x);
    printf("myCosh(%.2f) = %.2f\n", x, myCosh(x));
    return 0;
}
