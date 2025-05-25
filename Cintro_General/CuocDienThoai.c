#include <stdio.h>

int main() {
    float price6s, price;
    int ss;

    scanf("%f %f %d", &price6s, &price, &ss);

    if (price6s <= 0.0 || price <= 0.0 || ss <= 0.0) {
        printf("-1\n");
    } else {
        if (ss <= 6) {
            printf("%d", (int)price6s);
        } else {
            int over = ss - 6;
            float real_price = price6s + price * (float)over;
            if (real_price - (int)real_price != 0 ) {
            printf("%d", (int)real_price+1);
            } else printf("%d", (int)real_price);
        }
    }
    return 0;
}