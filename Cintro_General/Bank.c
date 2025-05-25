#include <stdio.h>
#include <math.h>

int main() {
    double r;
    scanf("%lf", &r);

    double amount = 100.0;
    int years = 0;

    while (amount < 200.0) {
        amount *= (1 + r / 100);
        years++;
    }

    printf("%d\n", years);
    return 0;
}