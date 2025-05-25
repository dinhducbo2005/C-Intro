#include <stdio.h>
double *maximum(double *a, int size) {
    if (a == NULL || size <= 0) {
        return NULL;
    }
    double *max = a; // max = &a[0];
    for (int i=1; i<size; i++) {
        if (a[i] > *max) {
            max = &a[i];
        }
    }
    return max;
}
int main() {
    double A[10];
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%lf", &A[i]);
    }
    double *max = maximum(A, n);
    if (max == NULL || n < 1 || n > 10) {
        printf("NULL");
    } else {
        printf("%.2f", *max);
    }
    return 0;
}