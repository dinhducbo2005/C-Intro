#include <stdio.h>
#include <math.h>

int main() {
    int n, digit, tmp, sum, found=0;
    printf("Nhap so N: ");
    scanf("%d", &n);
    printf("Cac so Amstrong la: \n");
    for (int i=pow(10, n-1); i<pow(10, n); i++) {
        tmp=i;
        sum=0;
        for (int j=n; j>=1; j--) {
            digit = tmp%10;
            tmp/=10;
            sum+=pow(digit, 3);
        }
        if (sum==i) {
            printf("%d\n", i);
            found=1;
        }
    }
    if (found==0) {
        printf("-1\n");
    }
    return 0;
}