#include <stdio.h>
#include <math.h>

float mySin(float x, int M) {
    float epsilon = pow(10, -M);
    float term = x;
    float sum = term;
    int n = 1;

    while (fabs(term) >= epsilon) {
        term *= -1.0 * x * x / ((2 * n) * (2 * n + 1));
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
    printf("%.2f", mySin(x, M));
    return 0;
}
