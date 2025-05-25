#include <stdio.h>

void count(int n, int *nb) {
    *nb = 0;
    for (int i=1; i<n; i++) {
        if (n%i==0) {
            (*nb)++;
        }
    }
}

int main() {
    int n, nb;
    printf("Nhap so n: ");
    scanf("%d", &n);
    count(n, &nb);
    printf("So uoc cua n (khong tinh n) la: %d", nb);
    return 0;
}