#include <stdio.h>
int main() {
    float price;
    int n;
    scanf("%f %d", &price, &n);

    int km = n/11;
    int conlai = n%11;
    int tong = km*10+conlai;

    printf("%.2f", (float)(price*tong));
}