#include <stdio.h>
#include <math.h>

float myArcsin(float x, int M) {
    float epsilon = pow(10, -M);
    float term = x;
    float sum = term;

    int n = 1;
    while (fabs(term) >= epsilon) {
        term *= (float)(2 * n - 1) * (2 * n - 1) * x * x / ((2 * n) * (2 * n + 1));
        sum += term;
        n++;
    }

    return sum;
}

int main() {
    float x;
    int M;
    scanf("%f", &x);
    scanf("%d", &M);
    printf("%.2f", myArcsin(x, M)); 
    return 0;
}
