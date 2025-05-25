#include <stdio.h>

int main() {
    int n1, n2, sum;
    printf("Nhap khoang: ");
    scanf("%d %d", &n1, &n2);
    printf("Cac so do la:\n");
    int i, j;
    for (i=n1+1; i<n2; i++) {
        sum = 0;
        for (j=1; j<i; j++) {
            if(i%j==0) {
                sum+=j;
            }
        }
        if (i==sum) {
            printf("%d\n", i);
        }
    }
}