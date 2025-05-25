#include <stdio.h>
double cel(double f) {
    return (f-32)*5/9;
}

int main() {
    for (int i = 1; i <= 20; i++) {
        printf("%d do F = %.2lf do C\n", i, cel(i));
    }
    return 0;
}