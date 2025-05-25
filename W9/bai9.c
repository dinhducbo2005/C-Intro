#include <stdio.h>
long sumcube(int n) {
    int i;
    long sum = 0;
    for (i=1; i <= n; i++){
        sum = i * i * i;
    }
    return sum;
}
void printsubmultiples(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
    printf("\n");
}
void printsquares(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d ", i * i);
    }
    printf("\n");
}
int main() {
    int n = 9;
    printf("Tong lap phuong: %d\n", sumcube(n));
    printf("Cac uoc so nguyen cua %d la: ", n);
    printsubmultiples(n);
    printf("%d binh phuong cua %d so dau tien la: ", n, n);
    printsquares(n);
    return 0;
}