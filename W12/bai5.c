#include <stdio.h>

int addNumbers(int *fiveNumbers, int n) {
    int sum = 0;
    for (int i=0; i<n; i++) {
        sum += fiveNumbers[i];
    }
    return sum;
}

int main() {
    int n, A[10];
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &A[i]);
    }
    printf("%d", addNumbers(A, n));
    return 0;
}