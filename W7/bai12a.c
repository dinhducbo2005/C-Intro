#include <stdio.h>
#include <math.h>

int main() {
    double X;
    int N;
    printf("Nhap X: ");
    scanf("%lf", &X);
    printf("Nhap N: ");   
    scanf("%d", &N);   

    double S = 0.0;
    double term = 1.0; 

    for (int k = 0; k < N; k++) {
        S += term;      
        term *= (-1) * X * X / ((2 * k + 1) * (2 * k + 2));
    }
    float check = cos(X);
    printf("S = %.2lf\n", S);
    printf("cos(x) = %.2f\n", check);
    return 0;
}