#include <stdio.h>
#include <string.h>

int check_Valid(char code[], double sell_price, double quantity, double fee_rate) {
    int length = strlen(code);
    if (length < 3 || length > 4 || fee_rate < 0.0 || fee_rate > 0.005 || sell_price <= 0.0 || quantity <= 0 || quantity > 1000000000) {
        return 0;
    }
    for (int i=0; i<length; i++) {
        if (code[i] < 'A' || code[i] > 'Z') {
            return 0;
        }
    }
    return 1;
}

double tax_Calculate(double sell_price, double quantity, double fee_rate) {
    double lephi = sell_price * quantity * fee_rate;
    double tncn = sell_price * quantity * 0.001;
    return sell_price * quantity - lephi - tncn; 
}

int main() {
    char code[5];
    double sell_price, quantity, fee_rate;

    scanf("%s %lf %lf %lf", code, &sell_price, &quantity, &fee_rate);

    if (!check_Valid(code, sell_price, quantity, fee_rate)) {
        printf("-1\n");
    } else {
        printf("%lld", (long long)tax_Calculate(sell_price, quantity, fee_rate));
    }

    return 0;
}